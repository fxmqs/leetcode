#include "Solution15.h"



Solution15::Solution15()
{
}


Solution15::~Solution15()
{
}

TEST(Solution15_t, test0)
{
	Solution15 test;
	vector<int> in({ -1, 0, 1, 2, -1, -4 });
	EXPECT_EQ(test.threeSum(in), 
		vector<vector<int>>({vector<int>({ -1, -1, 2 }), vector<int>({-1, 0, 1})}));
}