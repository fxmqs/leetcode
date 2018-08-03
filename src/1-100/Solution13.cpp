#include "Solution13.h"



Solution13::Solution13()
{
}


Solution13::~Solution13()
{
}

TEST(Solution13_t, test0)
{
	Solution13 test;
	EXPECT_EQ(test.romanToInt("I"), 1);
	EXPECT_EQ(test.romanToInt("LVIII"), 58);
	EXPECT_EQ(test.romanToInt("MCMXCIV"), 1994);
}