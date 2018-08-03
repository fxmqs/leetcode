#include "Solution_6.h"



Solution_6::Solution_6()
{
}


Solution_6::~Solution_6()
{
}

TEST(Solution_6testCase, test0)
{
	Solution_6 test;
	EXPECT_EQ(test.convert("PAYPALISHIRING", 3), "PAHNAPLSIIGYIR");
	EXPECT_EQ(test.convert("PAYPALISHIRING", 4), "PINALSIGYAHRPI");
}
