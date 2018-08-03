#include "Solution41.h"



Solution41::Solution41()
{
}


Solution41::~Solution41()
{
}



TEST(Solution41_t, test1)
{
	Solution41 test;

	vector<int> in({ 2,3,5,3 });

	in = vector<int>({ 1,2,0 });
	EXPECT_EQ(test.firstMissingPositive(in), 3);

	in = vector<int>({ 2,3,5,3 });
	EXPECT_EQ(test.firstMissingPositive(in), 1);

	in = vector<int>({ 2,1,0 });
	EXPECT_EQ(test.firstMissingPositive(in), 3);

	in = vector<int>({ 2,1,3 });
	EXPECT_EQ(test.firstMissingPositive(in), 4);
}

