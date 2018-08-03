#include "Solution10.h"



Solution10::Solution10()
{
}


Solution10::~Solution10()
{
}

TEST(Solution10testCase, test0)
{
	Solution10 test;
	EXPECT_EQ(test.isMatch("acaabbaccbbacaabbbb", "a*.*b*.*a*aa*a*"), false);

	EXPECT_EQ(test.isMatch("", "a*"), true);
	EXPECT_EQ(test.isMatch("", "a."), false);
	EXPECT_EQ(test.isMatch("aa", "a"), false);
	EXPECT_EQ(test.isMatch("ab", "."), false);
	EXPECT_EQ(test.isMatch("a", "."), true);

	EXPECT_EQ(test.isMatch("mississippi", "mis*is*p*"), false);
	EXPECT_EQ(test.isMatch("aab", "c*a*b"), true);
	EXPECT_EQ(test.isMatch("abdddddddddd", ".*"), true);
	EXPECT_EQ(test.isMatch("aaaaaaaaa", "a*"), true);
	EXPECT_EQ(test.isMatch("a", "ab*a"), false);
}
