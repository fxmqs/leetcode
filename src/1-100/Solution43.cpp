#include "Solution43.h"



Solution43::Solution43()
{
}


Solution43::~Solution43()
{
}


TEST(Solution43_t, test2)
{
	Solution43 test;
	EXPECT_EQ(test.multiply("5", "12"), "60");
	EXPECT_EQ(test.multiply("123", "456"), "56088");
	EXPECT_EQ(test.multiply("2", "3"), "6");
	EXPECT_EQ(test.multiply("1212", "0"), "0");
	EXPECT_EQ(test.multiply("0", "123123"), "0");
}
