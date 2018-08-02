#pragma once

#include "leetcode_defs.h"

class Solution25
{
public:
	Solution25();
	~Solution25();

	void reverse(ListNode* l, ListNode* r) {
		if (l == r) return;
		ListNode* cur = l;
		ListNode* next = l->next;
		reverse(next, r);
		next->next = cur;
	}

	void reverseList(ListNode* lp, ListNode* l, ListNode* rp, ListNode* r) {
		ListNode* ln = l->next;
		ListNode* rn = r->next;

		reverse(l, r);

		if (lp) lp->next = r;
		l->next = rn;
	}

	ListNode* reverseKGroup(ListNode* head, int k) {
		if (!head || k == 1) return head;
		--k;
		ListNode* res = head;
		ListNode* lp = NULL;
		do 
		{
			ListNode* l  = head;
			ListNode* rp = head;
			int i = 0;
			for (; i < k && head; head = head->next, ++i) rp = head;
			if (i != k || !head) break;
			reverseList(lp, l, rp, head);
			if (res == l) res = head;
			lp = l;
			head = l->next;
		} while (head);
		
		return res;
	}
};

