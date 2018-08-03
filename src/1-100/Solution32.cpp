#include "Solution32.h"



Solution32::Solution32()
{
}


Solution32::~Solution32()
{
}

TEST(Solution32_t, test0)
{
	Solution32 test;
	EXPECT_EQ(test.longestValidParentheses("))))())()()(()"), 4);
	EXPECT_EQ(test.longestValidParentheses("(()"), 2);
	EXPECT_EQ(test.longestValidParentheses("()(()"), 2);
	EXPECT_EQ(test.longestValidParentheses(")()())"), 4);
}
