#include "Solution20.h"



Solution20::Solution20()
{
}


Solution20::~Solution20()
{
}


TEST(Solution20_t, test0)
{
	Solution20 test;

	EXPECT_EQ(test.isValid("()"), true);
	EXPECT_EQ(test.isValid("()[]{}"), true);
	EXPECT_EQ(test.isValid("(]"), false);
	EXPECT_EQ(test.isValid("([)]"), false);
	EXPECT_EQ(test.isValid("{[]}"), true);
}