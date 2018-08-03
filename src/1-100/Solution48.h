#pragma once

#include "leetcode_defs.h"

class Solution48
{
public:
	Solution48();
	~Solution48();

	void rotate(vector<vector<int>>& matrix) {
		int n = matrix.size();
		if (n == 0) return;
		int m = matrix[0].size();
		if (m == 0) return;

		for (int x = 0; x < n / 2; ++x) {
			for (int y = x; y < m - x - 1; ++y) {
				int len = m - x -x - 1;
				std::swap(matrix[x][y], matrix[len - y][x]);
				std::swap(matrix[len - y][x], matrix[len - x][len - y]);
				std::swap(matrix[len - x][len - y], matrix[y][len - x]);
			}
		}
	}
};

