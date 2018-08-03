#pragma once

#include "leetcode_defs.h"

class Solution21
{
public:
	Solution21();
	~Solution21();

	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (!l1) return l2;
		if (!l2) return l1;

		std::vector<ListNode*> res;

		for (; l1 && l2;) {
			if (l1->val > l2->val) {
				res.push_back(l2);
				l2 = l2->next;
			}
			else {
				res.push_back(l1);
				l1 = l1->next;
			}
		}

		for (; l1; l1 = l1->next) res.push_back(l1);
		for (; l2; l2 = l2->next) res.push_back(l2);

		ListNode* head = res[0];
		for (auto node : res) {
			if (head == node) continue;
			head->next = node;
			head = node;
		}

		head->next = NULL;
		return res[0];
	}
};

