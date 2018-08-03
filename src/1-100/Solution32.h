#pragma once

#include "leetcode_defs.h"

class Solution32
{
public:
	Solution32();
	~Solution32();


	int havefun(string s) {
		int res = 0;
		int l = 0;
		int count = 0;
		int tmp = 0;
		for (int i = 0; i < s.size() - res; ++i) {
			if (s.at(i) == '(') {
				l = 1;
				count = 0;
				tmp = 2;
				for (int j = i + 1; j < s.size(); ++j) {
					if (s.at(j) == ')') {
						if (--l < 0) break;
						if (l == 0) {
							count += tmp;
							tmp = 0;
						}

						if (count > res) res = count;
					}
					else {
						++l;
						tmp += 2;
					}
				}
			}
		}

		return res;
	}

	int longestValidParentheses(string s) {
		int x = havefun(s);
		reverse(s.begin(), s.end());
		for (auto &x : s) {
			x = x == '(' ? ')' : '(';
		}
		int y = havefun(s);

		return min(x, y);
	}
};

