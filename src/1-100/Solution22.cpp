#include "Solution22.h"



Solution22::Solution22()
{
}


Solution22::~Solution22()
{
}

TEST(Solution22_t, test0)
{
	Solution22 test;

	EXPECT_EQ(test.generateParenthesis(1), vector<string>({ "()" }));
}