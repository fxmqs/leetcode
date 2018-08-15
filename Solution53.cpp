#include "Solution53.h"



Solution53::Solution53()
{
}


Solution53::~Solution53()
{
}

TEST(Solution53_t, test2)
{
	Solution53 test;
	vector<int> in({ -2,1,-3,4,-1,2,1,-5,4 });
	EXPECT_EQ(test.maxSubArray(in), 6);

}
TEST(Solution53_t, test3)
{
	Solution53 test;
	vector<int> in({ -2,-1,-3 });
	EXPECT_EQ(test.maxSubArray(in), -1);

}
TEST(Solution53_t, test4)
{
	Solution53 test;

	vector<int> in({ -2,1,-3 });
	EXPECT_EQ(test.maxSubArray(in), 1);
}