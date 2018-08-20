#include "Solution72.h"



Solution72::Solution72()
{
}


Solution72::~Solution72()
{
}

TEST(Solution_72, test2)
{
	Solution72 test;
	EXPECT_EQ(test.minDistance("horse", "ros"), 3);
	EXPECT_EQ(test.minDistance("intention", "execution"), 5);
}