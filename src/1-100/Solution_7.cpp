#include "Solution_7.h"



Solution_7::Solution_7()
{
}


Solution_7::~Solution_7()
{
}

TEST(Solution_7testCase, test0)
{
	Solution_7 test;
	EXPECT_EQ(test.reverse(123), 321);
	EXPECT_EQ(test.reverse(-123), -321);
	EXPECT_EQ(test.reverse(-120), -21);
}
