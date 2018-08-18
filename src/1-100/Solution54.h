#pragma once

#include "leetcode_defs.h"

class Solution54
{
public:
	Solution54();
	~Solution54();

	int m_x[4] = { 0, 1, 0, -1 };
	int m_y[4] = { 1, 0, -1, 0 };
	vector<vector<bool>> m_mark;

	void dfs(vector<int> &res, vector<vector<int>>& matrix, int x, int y, int n, int m) {
		if (m_mark[x][y]) return;
		res.push_back(matrix[x][y]);
		m_mark[x][y] = true;

		int nx = x < n-1 ? x + 1 : x;
		int ny = y < m-1 ? y + 1 : y;
		for (int i = 0;  i < 4; ++i) {
			while (true) {
				x += m_x[i];
				y += m_y[i];
				if (x < 0 || y < 0 || x == n || y == m || m_mark[x][y]) break;
				res.push_back(matrix[x][y]);
				m_mark[x][y] = true;
			}
			x -= m_x[i];
			y -= m_y[i];
		}
		dfs(res, matrix, nx, ny, n, m);
	}

	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		vector<int> res;
		if (matrix.empty()) {
			return res;
		}
		int n = matrix.size();
		int m = matrix[0].size();
		for (int i = 0; i < n; ++i) {
			vector<bool> mark;
			for (int j = 0; j < m; ++j) mark.push_back(false);
			m_mark.push_back(mark);
		}

		dfs(res, matrix, 0, 0, n, m);
		return res;
	}
};

