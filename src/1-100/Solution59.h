#pragma once

#include "leetcode_defs.h"

class Solution59
{
public:
	Solution59();
	~Solution59();

	int m_x[4] = { 0, 1, 0, -1 };
	int m_y[4] = { 1, 0, -1, 0 };


	void dfs(vector<vector<int>>& res, int k, int x, int y, int n) {
		if (res[x][y] != -1) return;
		res[x][y] = k++;

		int nx = x < n - 1 ? x + 1 : x;
		int ny = y < n - 1 ? y + 1 : y;

		for (int i = 0; i < 4; ++i) {
			while (true) {
				x += m_x[i];
				y += m_y[i];
				if (x < 0 || y < 0 || x == n || y == n || res[x][y] != -1) break;
				res[x][y] = k++;
			}
			x -= m_x[i];
			y -= m_y[i];
		}
		dfs(res, k, nx, ny, n);
	}

	vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>> res(n, vector<int>(n, -1));
		dfs(res, 1, 0, 0, n);
		return res;
	}
};

