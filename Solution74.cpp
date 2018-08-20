#include "Solution74.h"



Solution74::Solution74()
{
}


Solution74::~Solution74()
{
}
TEST(Solution_74, test1)
{
	Solution74 test;
	vector<vector<int>> in({
		vector<int>({ 1 }), });
	EXPECT_EQ(test.searchMatrix(in, 1), true);
	EXPECT_EQ(test.searchMatrix(in, 4), false);
}

TEST(Solution_74, test2)
{
	Solution74 test;
	vector<vector<int>> in({
		vector<int>({ 1,   3,  5,  7 }),
		vector<int>({ 10, 11, 16, 20 }),
		vector<int>({ 23, 30, 34, 50 }),
		});
	EXPECT_EQ(test.searchMatrix(in, 3), true);
	EXPECT_EQ(test.searchMatrix(in, 4), false);
}