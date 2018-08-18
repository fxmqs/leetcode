#include "Solution66.h"



Solution66::Solution66()
{
}


Solution66::~Solution66()
{
}

TEST(Solution66_t, test2)
{
	Solution66 test;

	vector<int> in({ 1, 2,3 });
	EXPECT_EQ(test.plusOne(in), vector<int>({ 1, 2, 4 }));
}
