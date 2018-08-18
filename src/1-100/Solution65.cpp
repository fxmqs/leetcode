#include "Solution65.h"



Solution65::Solution65()
{
}


Solution65::~Solution65()
{
}

TEST(Solution65_t, test2)
{
	Solution65 test;
	EXPECT_EQ(test.isNumber("6e6.5"), false);
	EXPECT_EQ(test.isNumber("+.4"), true);
	EXPECT_EQ(test.isNumber("+."), false);
	EXPECT_EQ(test.isNumber(".-4"), false);
	EXPECT_EQ(test.isNumber("6ee"), false);
	EXPECT_EQ(test.isNumber("1."), true);
	EXPECT_EQ(test.isNumber(".1"), true);
	EXPECT_EQ(test.isNumber("."), false);
	EXPECT_EQ(test.isNumber("0"), true);
	EXPECT_EQ(test.isNumber(" 0.1"), true);
	EXPECT_EQ(test.isNumber("abc"), false);
	EXPECT_EQ(test.isNumber("1 a"), false);
	EXPECT_EQ(test.isNumber("2e10"), true);
	EXPECT_EQ(test.isNumber("-2e10"), true);
	EXPECT_EQ(test.isNumber("-2e-10"), true);
	EXPECT_EQ(test.isNumber("e"), false);
}
