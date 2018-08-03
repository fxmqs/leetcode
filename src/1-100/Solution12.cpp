#include "Solution12.h"



Solution12::Solution12()
{
}


Solution12::~Solution12()
{
}

TEST(Solution12_t, test0)
{
	Solution12 test;
	EXPECT_EQ(test.intToRoman(1), "I");
	EXPECT_EQ(test.intToRoman(3), "III");
	EXPECT_EQ(test.intToRoman(4), "IV");
	EXPECT_EQ(test.intToRoman(58), "LVIII");
	EXPECT_EQ(test.intToRoman(1994), "MCMXCIV");
	EXPECT_EQ(test.intToRoman(1), "I");
	EXPECT_EQ(test.intToRoman(1), "I");
	EXPECT_EQ(test.intToRoman(1), "I");
	EXPECT_EQ(test.intToRoman(1), "I");
}