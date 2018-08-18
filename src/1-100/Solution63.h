#pragma once

#include "leetcode_defs.h"

class Solution63
{
public:
	Solution63();
	~Solution63();

	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
		if (obstacleGrid.empty()) return 0;

		int dp[105][105] = { 0 };
		int m = obstacleGrid.size();
		int n = obstacleGrid[0].size();

		for (int i = 1; i <= m; ++i) {
			for (int j = 1; j <= n; ++j) {
				if (obstacleGrid[i - 1][j - 1]) dp[i][j] = 0;
				else {
					dp[i][j] = (i == 1 && j == 1) ? 1 : dp[i - 1][j] + dp[i][j - 1];
				}
			}
		}

		return dp[m][n];

	}
};

