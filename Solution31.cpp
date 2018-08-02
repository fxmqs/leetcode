#include "Solution31.h"



Solution31::Solution31()
{
}


Solution31::~Solution31()
{
}

TEST(Solution31_t, test0)
{
	Solution31 test;
	vector<int> nums({ 1, 3, 2 });
	test.nextPermutation(nums);
	EXPECT_EQ(nums, vector<int>({ 2, 1, 3 }));
}

TEST(Solution31_t, test1)
{
	Solution31 test;
	vector<int> nums({ 1, 2, 3 });
	test.nextPermutation(nums);
	EXPECT_EQ(nums, vector<int>({ 1, 3, 2 }));
}
TEST(Solution31_t, test2)
{
	Solution31 test;
	vector<int> nums({ 1, 1, 3 });
	test.nextPermutation(nums);
	EXPECT_EQ(nums, vector<int>({ 1, 3, 1 }));
}
TEST(Solution31_t, test3)
{
	Solution31 test;
	vector<int> nums({ 1, 1, 3, 1 });
	test.nextPermutation(nums);
	EXPECT_EQ(nums, vector<int>({ 1, 3, 1, 1 }));
}
TEST(Solution31_t, test4)
{
	Solution31 test;
	vector<int> nums({ 1, 1, 3, 3 });
	test.nextPermutation(nums);
	EXPECT_EQ(nums, vector<int>({ 1, 3, 1, 3 }));
}