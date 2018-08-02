#include "Solution_8.h"



Solution_8::Solution_8()
{
}


Solution_8::~Solution_8()
{
}

TEST(Solution_8testCase, test0)
{
	Solution_8 test;
	EXPECT_EQ(test.myAtoi("-91283472332"), -2147483648);
	EXPECT_EQ(test.myAtoi("        -42"), -42);
	EXPECT_EQ(test.myAtoi("123"), 123);
	EXPECT_EQ(test.myAtoi("42"), 42);
	EXPECT_EQ(test.myAtoi("4193 with words"), 4193);
	EXPECT_EQ(test.myAtoi("words and 987"), 0);
}
