#pragma once

#include "leetcode_defs.h"

class Solution_5
{
public:
	Solution_5();
	~Solution_5();

	string longestPalindrome(string s) {
		int start(0);
		int len(1);
		for (int i = 1; i < s.size(); ++i) {
			for (int j = 1; i - j >= 0 && i + j < s.size(); ++j) {
				if (s.at(i - j) == s.at(i + j)) {
					if ((j * 2 + 1) > len) {
						start = i - j;
						len = j * 2 + 1;
					}
					continue;
				}
				break;
			}

			for (int j = 1; i - j >= 0 && i + j - 1 < s.size(); ++j) {
				if (s.at(i - j) == s.at(i + j - 1)) {
					if ((j * 2) > len) {
						start = i - j;
						len = j * 2;
					}
					continue;
				}
				break;
			}
		}

		return s.substr(start, len);
	}
};

