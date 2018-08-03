#include "Solution36.h"



Solution36::Solution36()
{
}


Solution36::~Solution36()
{
}

TEST(Solution36_t, test1)
{
	Solution36 test;
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
	EXPECT_EQ(test.isValidSudoku(board), true);
}

TEST(Solution36_t, test2)
{
	Solution36 test;
	vector<vector<char>> board({
		vector<char>({ '8', '3', '.', '.', '7', '.', '.', '.', '.' }),
		vector<char>({ '6', '.', '.', '1', '9', '5', '.', '.', '.' }),
		vector<char>({ '.', '9', '8', '.', '.', '.', '.', '6', '.' }),
		vector<char>({ '8', '.', '.', '.', '6', '.', '.', '.', '3' }),
		vector<char>({ '4', '.', '.', '8', '.', '3', '.', '.', '1' }),
		vector<char>({ '7', '.', '.', '.', '2', '.', '.', '.', '6' }),
		vector<char>({ '.', '6', '.', '.', '.', '.', '2', '8', '.' }),
		vector<char>({ '.', '.', '.', '4', '1', '9', '.', '.', '5' }),
		vector<char>({ '.', '.', '.', '.', '8', '.', '.', '7', '9' }) });
	EXPECT_EQ(test.isValidSudoku(board), false);
}