#include "Solution44.h"



Solution44::Solution44()
{
}


Solution44::~Solution44()
{
}

TEST(Solution44_t, test2)
{
	Solution44 test;
	EXPECT_EQ(test.isMatch("abce", "abc*d"), false);
	EXPECT_EQ(test.isMatch("b", "?*?"), false);
	EXPECT_EQ(test.isMatch("a", "aa"), false);
	EXPECT_EQ(test.isMatch("ba", "*ba"), true);
	EXPECT_EQ(test.isMatch("ba", "*?b??"), false);
	EXPECT_EQ(test.isMatch("adceb", "*a*b"), true);
	EXPECT_EQ(test.isMatch("aa", "a"), false);
	EXPECT_EQ(test.isMatch("a", "a"), true);
	EXPECT_EQ(test.isMatch("aa", "*"), true);
	EXPECT_EQ(test.isMatch("cb", "?a"), false);
	EXPECT_EQ(test.isMatch("acdcb", "a*c?b"), false);
	EXPECT_EQ(test.isMatch("aaabbbaabaaaaababaabaaabbabbbbbbbbaabababbabbbaaaaba", "a*******b"), false);
	EXPECT_EQ(test.isMatch("babbbbaabababaabbababaababaabbaabababbaaababbababaaaaaabbabaaaabababbabbababbbaaaababbbabbbbbbbbbbaabbb", "b**bb**a**bba*b**a*bbb**aba***babbb*aa****aabb*bbb***a"), false);
}