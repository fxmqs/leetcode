#pragma once

#include "leetcode_defs.h"

class Solution_3
{
public:
	Solution_3();
	~Solution_3();

	int lengthOfLongestSubstring(string s) {
		int index[128];
		for (auto &x : index) x = -1;
		int res = 0;
		int len = 0;
		for (auto i = 0; i < s.size(); ++i) {
			++len;
			int j = index[s.at(i)];
			if (j != -1) {
				len = i - j;
				for (auto &x : index) x = -1;
				for (; j != i; ++j) {
					index[s.at(j)] = j;
				}
			}
			index[s.at(i)] = i;
			if (len > res) res = len;
		}

		return res;
	}
};

