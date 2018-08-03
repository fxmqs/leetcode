#pragma once
#include "leetcode_defs.h"

class Solution_7
{
public:
	Solution_7();
	~Solution_7();

	int reverse(int x) {
		bool flag = x < 0;
		long res = 0;
		long temp = flag ? -x : x;
		char buf[32] = { 0 };
		int len = sprintf(buf, "%lld", temp);
		while (len--) {
			res = res * 10 + buf[len] - '0';
		}

		if (flag) res = -res;
		if (res > 0x7fffffff || res < (int)(0x80000000)) {
			return 0;
		}

		return res;
	}
};

