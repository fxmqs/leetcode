#include "Solution40.h"



Solution40::Solution40()
{
}


Solution40::~Solution40()
{
}

TEST(Solution40_t, test2)
{
	Solution40 test;
	vector<vector<int>> res({
		vector<int>({ 7 }),
		});

	vector<int> in({ 2,3,6,7 });
	EXPECT_EQ(test.combinationSum2(in, 7), res);
}

TEST(Solution40_t, test1)
{
	Solution40 test;
	vector<vector<int>> res({
		vector<int>({ 2,3,3 }),
		vector<int>({ 3,5 }),
		});

	vector<int> in({ 2,3,5,3 });
	EXPECT_EQ(test.combinationSum2(in, 8), res);
}
