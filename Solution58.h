#pragma once

#include "leetcode_defs.h"

class Solution58
{
public:
	Solution58();
	~Solution58();

	int lengthOfLastWord(string s) {
		if (s.empty()) return 0;
		int res = 0;
		int now = 0;
		for (auto x : s) {
			if (x == ' ') {
				if (now != 0) res = now;
				now = 0;
			}
			else ++now;
		}

		if (now != 0) res = now;
		return res;
	}
};

