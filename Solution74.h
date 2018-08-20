#pragma once

#include "leetcode_defs.h"

class Solution74
{
public:
	Solution74();
	~Solution74();

	bool searchMatrix(vector<vector<int>>& matrix, int target) {

		if (matrix.empty()) return false;

		int n = matrix.size();
		int m = matrix[0].size();

		if (n*m == 0) return false;

		int l = 0; 
		int r = n * m;

		int mid = (l + r) / 2;
		int x = mid / m;
		int y = mid % m;
		while (l < r) {
			if (matrix[x][y] > target) r = mid - 1;
			else if (matrix[x][y] < target) l = mid + 1;
			else break;

			mid = (l + r) / 2;
			x = mid / m;
			y = mid % m;
		}

		return mid == n*m ? false : matrix[x][y] == target;
	}
};

