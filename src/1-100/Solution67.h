#pragma once

#include "leetcode_defs.h"

class Solution67
{
public:
	Solution67();
	~Solution67();

	string addBinary(string a, string b) {
		if (a.size() < b.size()) swap(a, b);
		int n = a.size();
		int m = b.size();
		int i = 1;

		string res;
		int cur = 0;
		for (; i <= m; ++i) {
			cur += b[m - i] - '0' + a[n - i] - '0';
			res += (cur & 1) + '0';
			cur >>= 1;
		}

		for (; i <= n; ++i) {
			cur += a[n - i] - '0';
			res += (cur&1) + '0';
			cur >>= 1;
		}
		if (cur) res += '1';
		reverse(res.begin(), res.end());
		return res;
	}
};

