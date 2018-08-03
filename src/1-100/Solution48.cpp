#include "Solution48.h"



Solution48::Solution48()
{
}


Solution48::~Solution48()
{
}


TEST(Solution48_t, test2)
{
	Solution48 test;
	vector<vector<int>> matrix = vector<vector<int>>({
		vector<int>({ 5, 1, 9,11 }),
		vector<int>({ 2, 4, 8,10 }),
		vector<int>({ 13, 3, 6, 7 }),
		vector<int>({ 15,14,12,16 }),
		});
	test.rotate(matrix);
	vector<vector<int>> matrix2 = vector<vector<int>>({
		vector<int>({ 15,13, 2, 5 }),
		vector<int>({ 14, 3, 4, 1 }),
		vector<int>({ 12, 6, 8, 9 }),
		vector<int>({ 16, 7,10,11 }),
		});
	EXPECT_EQ(matrix, matrix2);
}
TEST(Solution48_t, test)
{
	Solution48 test;
	vector<vector<int>> matrix = vector<vector<int>>({
		vector<int>({ 1,2 }),
		vector<int>({ 3,4 }),
		});
	test.rotate(matrix);
	vector<vector<int>> matrix2 = vector<vector<int>>({
		vector<int>({ 3,1 }),
		vector<int>({ 4,2 }),
		});
	EXPECT_EQ(matrix, matrix2);
}

TEST(Solution48_t, test1)
{
	Solution48 test;
	vector<vector<int>> matrix = vector<vector<int>>({
		vector<int>({ 1,2,3 }),
		vector<int>({ 4,5,6 }),
		vector<int>({ 7,8,9 }),
		});
	test.rotate(matrix);
	vector<vector<int>> matrix2 = vector<vector<int>>({
		vector<int>({ 7,4,1 }),
		vector<int>({ 8,5,2 }),
		vector<int>({ 9,6,3 }),
		});
	EXPECT_EQ(matrix, matrix2);
}