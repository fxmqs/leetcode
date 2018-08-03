#pragma once

#include "leetcode_defs.h"

class Solution37
{
public:
	Solution37();
	~Solution37();

	int mark[3][9] = { 0 };
	char m[9][9] = { 0 };

	bool dfs(int x, int y, vector<vector<char>>& board) {
		if (x == 0 && y == 9) return true;
		if (x == 9) {
			return dfs(0, y + 1, board);
		}
		if (board[x][y] != '.') {
			return dfs(x + 1, y, board);
		}

		for (int i = 1; i <= 9; ++i) {
			if ((mark[0][i - 1] & (1 << x)) ||
				(mark[1][i - 1] & (1 << y)) ||
				(mark[2][i - 1] & (1 << (x / 3 * 3 + y / 3)))) {
				continue;
			}

			m[x][y] = i + '0';
			mark[0][i - 1] |= (1 << x);
			mark[1][i - 1] |= (1 << y);
			mark[2][i - 1] |= (1 << (x / 3 * 3 + y / 3));
			if (dfs(x + 1, y, board)) {
				return true;
			}

			m[x][y] = '.';
			mark[0][i - 1] ^= (1 << x);
			mark[1][i - 1] ^= (1 << y);
			mark[2][i - 1] ^= (1 << (x / 3 * 3 + y / 3));
		}

		return false;
	}

	void solveSudoku(vector<vector<char>>& board) {
		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				m[i][j] = board[i][j];
				if (board[i][j] == '.') continue;
				mark[0][board[i][j] - '1'] |= (1 << i);
				mark[1][board[i][j] - '1'] |= (1 << j);
				mark[2][board[i][j] - '1'] |= (1 << (i / 3 * 3 + j / 3));
			}
		}

		dfs(0, 0, board);

		for (int i = 0; i < 9; ++i) {
			for (int j = 0; j < 9; ++j) {
				board[i][j] = m[i][j];
			}
		}
	}
};

