#pragma once

#include "leetcode_defs.h"

class Solution19
{
public:
	Solution19();
	~Solution19();

	ListNode* removeNthFromEnd(ListNode* head, int n) {
		std::vector<ListNode*> nodes;
		for (; head; head = head->next) nodes.push_back(head);

		if (n == nodes.size()) {
			return nodes.size() == 1 ? NULL : nodes[1];
		}
		
		nodes[nodes.size() - n - 1]->next = nodes[nodes.size() - n]->next;
		return nodes[0];
	}
};

