#include "Solution34.h"



Solution34::Solution34()
{
}


Solution34::~Solution34()
{
}


TEST(Solution34_t, test2)
{
	Solution34 test;
	vector<int> nums({ 5,7,7,8,8,10 });
	EXPECT_EQ(test.searchRange(nums, 8), vector<int>({ 3, 4 }));
	EXPECT_EQ(test.searchRange(nums, 11), vector<int>({ -1, -1 }));
	EXPECT_EQ(test.searchRange(nums, 10), vector<int>({ 5, 5 }));
	EXPECT_EQ(test.searchRange(nums, 5), vector<int>({ 0, 0 }));
}