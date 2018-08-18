#pragma once

#include "leetcode_defs.h"

class Solution61
{
public:
	Solution61();
	~Solution61();

	ListNode* rotateRight(ListNode* head, int k) {
		if (!head) return head;
		vector<ListNode*> nodes;
		for (; head; head = head->next) {
			nodes.push_back(head);
		}

		k %= nodes.size();
		k = nodes.size() - k;
		ListNode* res = nodes[k % nodes.size()];
		ListNode* p = res;
		for (int i = 1; i < nodes.size(); ++i) {
			p->next = nodes[(k + i) % nodes.size()];
			p = p->next;
		}
		p->next = NULL;
		return res;
	}
};

