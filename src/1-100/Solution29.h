#pragma once

#include "leetcode_defs.h"

class Solution29
{
public:
	Solution29();
	~Solution29();

	int div(long long &x, long long y, int n) {
		if (x < y) return 0;
		if (x < y + y) {
			x -= y;
			return n;
		}

		int k = div(x, y + y, n + n);
		if (x >= y) {
			x -= y;
			return k + n;
		}
		else return k;
	}

	int divide(int dividend, int divisor) {
		if (dividend == 0x80000000 && divisor == -1) {
			return 0x7fffffff;
		}

		bool flag = (dividend < 0) ^ (divisor < 0);
		long long x = dividend < 0 ? 0LL - dividend : dividend;
		long long y = divisor < 0 ? 0LL - divisor : divisor;

		int res = div(x, y, 1);

		return flag ? -res : res;
	}

};

