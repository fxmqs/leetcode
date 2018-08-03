#include "Solution39.h"



Solution39::Solution39()
{
}


Solution39::~Solution39()
{
}

TEST(Solution39_t, test2)
{
	Solution39 test;
	vector<vector<int>> res({
		vector<int>({ 2, 2, 3 }),
		vector<int>({ 7 }),
		});

	vector<int> in({ 2,3,6,7 });
	EXPECT_EQ(test.combinationSum(in, 7), res);
}

TEST(Solution39_t, test1)
{
	Solution39 test;
	vector<vector<int>> res({
		vector<int>({ 2,2,2,2 }),
		vector<int>({ 2,3,3 }),
		vector<int>({ 3,5 }),
		});

	vector<int> in({ 2,3,5 });
	EXPECT_EQ(test.combinationSum(in, 8), res);
}