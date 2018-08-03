#pragma once

#include "leetcode_defs.h"

class Solution_9
{
public:
	Solution_9();
	~Solution_9();

	bool isPalindrome(int x) {
		if (x < 0) return false;
		char s[32] = { 0 };
		int len = sprintf(s, "%d", x);
		for (int i = 0; i < len / 2; ++i)
			if (s[i] != s[len - i - 1]) return false;
		return true;
	}
};

