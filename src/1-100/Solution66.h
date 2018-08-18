#pragma once

#include "leetcode_defs.h"

class Solution66
{
public:
	Solution66();
	~Solution66();

	vector<int> plusOne(vector<int>& digits) {
		int n = digits.size();
		bool one = true;
		for (--n; n >= 0; --n) {
			if (one) {
				if (++digits[n] > 9) {
					digits[n] = 0;
					one = true;
				}
				else {
					one = false;
					break;
				}
			}
		}
		vector<int> res(digits.size() + one, 1);
		for (int i = 0; i < digits.size(); ++i) {
			res[i + one] = digits[i];
		}
		return res;
	}
};

