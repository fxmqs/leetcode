#pragma once

#include "leetcode_defs.h"
class Solution50
{
public:
	Solution50();
	~Solution50();

	double pow(double x, long long n) {
		if (n == 0) return 1;
		if (n == 1) return x;

		double res = pow(x, n / 2) * pow(x, n / 2);
		if (n & 1) {
			res *= x;
		}

		return res;
	}

	double myPow(double x, int n) {
		return pow(n < 0 ? 1 / x : x, n < 0 ? 0LL - n : n);
	}
};

