#pragma once

#include "leetcode_defs.h"

class Solution14
{
public:
	Solution14();
	~Solution14();

	string longestCommonPrefix(vector<string>& strs) {
		string res = "";
		for (int i = 0; ; ++i) {
			char c = -1;
			for (auto s : strs) {
				if (!s[i]) return res;
				if (c == -1) c = s[i];
				else if (c != s[i]) return res;
			}
			res += c;
		}

		return res;
	}
};

