#include "Solution11.h"



Solution11::Solution11()
{
}


Solution11::~Solution11()
{
}


TEST(Solution11_t, test0)
{
	Solution11 test;
	vector<int> in({ 1,8,6,2,5,4,8,3,7 });
	EXPECT_EQ(test.maxArea(in), 49);
}