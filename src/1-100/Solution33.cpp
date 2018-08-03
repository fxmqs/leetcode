#include "Solution33.h"



Solution33::Solution33()
{
}


Solution33::~Solution33()
{
}

TEST(Solution33_t, test2)
{
	Solution33 test;
	vector<int> nums({ 5, 1,3 });
	EXPECT_EQ(test.search(nums, 1), 1);
	EXPECT_EQ(test.search(nums, 3), 2);
	EXPECT_EQ(test.search(nums, 2), -1);
}

TEST(Solution33_t, test3)
{
	Solution33 test;
	vector<int> nums({ 5, 6, 1,3 });
	EXPECT_EQ(test.search(nums, 1), 2);
	EXPECT_EQ(test.search(nums, 3), 3);
	EXPECT_EQ(test.search(nums, 2), -1);
}


TEST(Solution33_t, test0)
{
	Solution33 test;
	vector<int> nums({ 4,5,6,7,0,1,2 });
	EXPECT_EQ(test.search(nums, 0), 4);
	EXPECT_EQ(test.search(nums, 3), -1);
}

TEST(Solution33_t, test1)
{
	Solution33 test;
	vector<int> nums({ 1,3 });
	EXPECT_EQ(test.search(nums, 1), 0);
	EXPECT_EQ(test.search(nums, 3), 1);
	EXPECT_EQ(test.search(nums, 2), -1);
}
