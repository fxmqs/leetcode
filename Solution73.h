#pragma once

#include "leetcode_defs.h"

class Solution73
{
public:
	Solution73();
	~Solution73();

	void setZeroes(vector<vector<int>>& matrix) {
		int n = matrix.size();
		int m = matrix[0].size();

		set<int> zi, zj;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (matrix[i][j] == 0) {
					zi.insert(i);
					zj.insert(j);
				}
			}
		}

		for (auto i : zi) for (int j = 0; j < m; ++j) matrix[i][j] = 0;
		for (auto j : zj) for (int i = 0; i < n; ++i) matrix[i][j] = 0;
	}
};

