#pragma once

#include "leetcode_defs.h"


class Solution36
{
public:
	Solution36();
	~Solution36();

	bool isValidSudoku(vector<vector<char>>& board) {

		int mark[3][9] = { 0 };

		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				if (board[i][j] == '.') continue;
				if (!(mark[0][board[i][j] - '1'] & (1 << i))) mark[0][board[i][j] - '1'] |= (1 << i);
				else return false;

				if (!(mark[1][board[i][j] - '1'] & (1 << j))) mark[1][board[i][j] - '1'] |= (1 << j);
				else return false;

				if (!(mark[2][board[i][j] - '1'] & (1 << (i/3*3 + j/3)))) 
					mark[2][board[i][j] - '1'] |= (1 << (i / 3 * 3 + j / 3));
				else 
					return false;

			}
		}

		return true;
	}
};

