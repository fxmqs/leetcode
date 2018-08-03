#include "Solution35.h"



Solution35::Solution35()
{
}


Solution35::~Solution35()
{
}

TEST(Solution35_t, test2)
{
	Solution35 test;
	vector<int> nums({ 1,3,5,6 });
	EXPECT_EQ(test.searchInsert(nums, 5), 2);
	EXPECT_EQ(test.searchInsert(nums, 2), 1);
	EXPECT_EQ(test.searchInsert(nums, 7), 4);
	EXPECT_EQ(test.searchInsert(nums, 0), 0);
}
