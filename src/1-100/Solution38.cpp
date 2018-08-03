#include "Solution38.h"



Solution38::Solution38()
{
}


Solution38::~Solution38()
{
}

TEST(Solution38_t, test2)
{
	Solution38 test;
	EXPECT_EQ(test.countAndSay(2), "11");
	EXPECT_EQ(test.countAndSay(5), "111221");
}