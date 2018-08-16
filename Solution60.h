#pragma once

#include "leetcode_defs.h"

class Solution60
{
public:
	Solution60();
	~Solution60();

	string getPermutation(int n, int k) {
		string res;
		for (int i = 0; i < n; ++i) {
			res += ('1' + i);
		}
		while (--k) next_permutation(res.begin(), res.end());
		return res;
	}
};

