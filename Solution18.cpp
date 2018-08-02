#include "Solution18.h"



Solution18::Solution18()
{
}


Solution18::~Solution18()
{
}

TEST(Solution18_t, test0)
{
	Solution18 test;
	vector<int> in({ 1, 0, -1, 0, -2, 2 });
	EXPECT_EQ(test.fourSum(in, 0),
		vector<vector<int>>({ 
			vector<int>({ -2, -1, 1, 2 }),
			vector<int>({ -2,  0, 0, 2 }),
			vector<int>({ -1,  0, 0, 1 })
			}));
}