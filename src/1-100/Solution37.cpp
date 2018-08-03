#include "Solution37.h"



Solution37::Solution37()
{
}


Solution37::~Solution37()
{
}

TEST(Solution37_t, test2)
{
	Solution37 test;
	vector<vector<char>> board({
		vector<char>({ '5', '3', '.', '.', '7', '.', '.', '.', '.' }),
		vector<char>({ '6', '.', '.', '1', '9', '5', '.', '.', '.' }),
		vector<char>({ '.', '9', '8', '.', '.', '.', '.', '6', '.' }),
		vector<char>({ '8', '.', '.', '.', '6', '.', '.', '.', '3' }),
		vector<char>({ '4', '.', '.', '8', '.', '3', '.', '.', '1' }),
		vector<char>({ '7', '.', '.', '.', '2', '.', '.', '.', '6' }),
		vector<char>({ '.', '6', '.', '.', '.', '.', '2', '8', '.' }),
		vector<char>({ '.', '.', '.', '4', '1', '9', '.', '.', '5' }),
		vector<char>({ '.', '.', '.', '.', '8', '.', '.', '7', '9' }) });

	test.solveSudoku(board);
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			printf("%c", board[i][j]);
		}
		printf("\n");
	}

	EXPECT_EQ(false, false);
}