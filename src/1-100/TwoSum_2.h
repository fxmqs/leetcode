#pragma once

#include "leetcode_defs.h"

class TwoSum_2
{
public:
	ListNode * addTwoNumbers(ListNode* l1, ListNode* l2) {
		int temp = 0;
		ListNode* res = l1;
		ListNode* pre_l1 = l1;
		for (; l1 && l2; l1 = l1->next, l2 = l2->next) {
			l1->val += (l2->val + temp);
			temp = l1->val >= 10;
			if (temp) l1->val -= 10;
			pre_l1 = l1;
		}

		if (!l1) {
			pre_l1->next = l2;
			l1 = l2;
		}

		for (; temp; l1 = l1->next) {
			if (!l1) {
				pre_l1->next = new ListNode(1);
				break;
			}
			l1->val += temp;
			temp = l1->val >= 10;
			if (temp) l1->val -= 10;
			pre_l1 = l1;
		}

		return res;
	}

	ListNode * reverse(ListNode* l) {
		ListNode *node = l;
		ListNode *head = reverse(node->next);
		node->next->next = l;
		return head;
	}

	TwoSum_2();
	~TwoSum_2();
};

