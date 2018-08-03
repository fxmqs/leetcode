#include "Solution_5.h"



Solution_5::Solution_5()
{
}


Solution_5::~Solution_5()
{
}

TEST(Solution_5testCase, test0)
{
	Solution_5 test;
	EXPECT_EQ(test.longestPalindrome("aaaabaaa"), "aaabaaa");
	EXPECT_EQ(test.longestPalindrome("babad"), "bab");
	EXPECT_EQ(test.longestPalindrome("cbbd"), "bb");
	EXPECT_EQ(test.longestPalindrome("bb"), "bb");
}
