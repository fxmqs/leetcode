#pragma once

#include "leetcode_defs.h"

class Solution52
{
public:
	Solution52();
	~Solution52();

	void domark(int i, int k, int n, vector<int> &mark) {
		for (int j = i; j < n; ++j) {
			mark[j] |= 1LL << k;
			if (k + j - i < n) mark[j] |= 1LL << (k + j - i);
			if (k - j + i >= 0) mark[j] |= 1LL << (k - j + i);
		}
	}

	void dfs(int i, int n,int& res, vector<int> &mark) {
		if (i == n) {
			++res;
			return;
		}

		for (int k = 0; k < n; ++k) {
			if ((1LL << k) & mark[i]) continue;
			vector<int> markx(mark);
			domark(i, k, n, markx);
			dfs(i + 1, n, res, markx);
		}
	}
	int totalNQueens(int n) {
		int res = 0;
		vector<int> mark(n, 0);
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) mark[j] = 0;
			domark(0, i, n, mark);
			dfs(1, n, res, mark);
		}
		return res;
	}
};

