#pragma once

#include "leetcode_defs.h"

class Solution24
{
public:
	Solution24();
	~Solution24();

	ListNode* swapPairs(ListNode* head) {
		if (!head || !head->next) return head;

		ListNode* res = head->next;
		ListNode* parent = NULL;
		while (head && head->next) {
			auto next = head->next;
			auto nnext = head->next->next;
			if (parent) {
				parent->next = next;
			}
			parent = head;

			next->next = head;
			head->next = nnext;
			head = nnext;
		}

		return res;
	}
};

