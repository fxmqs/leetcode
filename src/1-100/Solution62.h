#pragma once

#include "leetcode_defs.h"

class Solution62
{
public:
	Solution62();
	~Solution62();

	int dfs(int x, int y, int m, int n) {
		if (x == m) return 1;
		if (y == n) return 1;

		return dfs(x + 1, y, m, n) + dfs(x, y + 1, m, n);
	}

    int uniquePaths(int m, int n) {
		int dp[105][105];

		for (int i = 1; i <= m; ++i) {
			for (int j = 1; j <= n; ++j) {
				dp[i][j] = (i == 1 || j == 1) ? 1 : dp[i - 1][j] + dp[i][j - 1];
			}
		}

		return dp[m][n];
    }
};

