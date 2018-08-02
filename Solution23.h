#pragma once

#include "leetcode_defs.h"

class Solution23
{
public:
	Solution23();
	~Solution23();


	ListNode* mergeKLists(vector<ListNode*>& lists) {
		if (lists.empty()) return NULL;

		std::vector<ListNode*> res;

		while (true) {
			int val = 0x7fffffff;
			int next = -1;
			for (int i = 0; i < lists.size(); ++i) {
				if (!lists[i]) continue;
				if (lists[i]->val < val) {
					val = lists[i]->val;
					next = i;
				}
			}

			if (-1 == next) break;
			res.push_back(lists[next]);
			lists[next] = lists[next]->next;

		}

		if (res.empty()) {
			return NULL;
		}

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

