#pragma once

#include "leetcode_defs.h"

class Solution69
{
public:
	Solution69();
	~Solution69();

	int mySqrt(int x) {
		for (long long i = 1; i <= 65536; ++i) {
			if (i*i > x) return i - 1;
		}

		return 65536;
	}
};

