#include "Solution29.h"



Solution29::Solution29()
{
}


Solution29::~Solution29()
{
}

TEST(Solution29_t, test1)
{
	Solution29 test;
	EXPECT_EQ(test.divide(10, 3), 3);
}

TEST(Solution29_t, test2)
{
	Solution29 test;
	EXPECT_EQ(test.divide(7, -3), -2);
}
