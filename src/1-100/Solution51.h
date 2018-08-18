#pragma once

#include "leetcode_defs.h"

class Solution51
{
public:
	Solution51();
	~Solution51();

	void domark(int i, int k, int n, vector<long long> &mark) {
		for (int j = i; j < n; ++j) {
			mark[j] |= 1LL << k;
			if (k + j - i < n) mark[j] |= 1LL << (k + j - i);
			if (k - j + i >=0) mark[j] |= 1LL << (k - j + i);
		}
	}

	void dfs(int i, int n, vector<vector<string>>& res, 
		vector<string>& path, vector<long long> &mark) {
		if (i == n) {
			res.push_back(path);
			return;
		}

		if (i == 0) {
			for (int k = 0; k < n; ++k) {
				path[i][k] = 'Q';
				vector<long long> markx(mark);
				domark(i, k, n, markx);
				dfs(i + 1, n, res, path, markx);
				path[i][k] = '.';
			}
			return;
		}

		for (int k = 0; k < n; ++k) {
			if ((1LL << k) & mark[i]) continue;
			path[i][k] = 'Q';
			vector<long long> markx(mark);
			domark(i, k, n, markx);
			dfs(i + 1, n, res, path, markx);
			path[i][k] = '.';
		}
	}

	vector<vector<string>> solveNQueens(int n) {
		vector<vector<string>> res;
		vector<string> path;
		vector<long long> mark;
		mark.resize(n);
		path.resize(n);
		for (int i = 0; i < n; ++i) {
			path[i] = std::string(n, '.');
			mark[i] = 0;
		}
		dfs(0, n, res, path, mark);
		return res;
	}
};

