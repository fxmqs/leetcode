#include "Solution_9.h"



Solution_9::Solution_9()
{
}


Solution_9::~Solution_9()
{
}

TEST(Solution_9testCase, test0)
{
	Solution_9 test;
	EXPECT_EQ(test.isPalindrome(-912872332), false);
	EXPECT_EQ(test.isPalindrome(0), true);
	EXPECT_EQ(test.isPalindrome(121), true);
	EXPECT_EQ(test.isPalindrome(11), true);
	EXPECT_EQ(test.isPalindrome(13), false);
}
