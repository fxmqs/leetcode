#include "Solution42.h"



Solution42::Solution42()
{
}


Solution42::~Solution42()
{
}

TEST(Solution42_t, test2)
{
	Solution42 test;
	vector<int> in({ 0,1,0,2,1,0,1,3,2,1,2,1 });
	EXPECT_EQ(test.trap(in), 6);
}
