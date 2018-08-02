#include "Solution17.h"



Solution17::Solution17()
{
}


Solution17::~Solution17()
{
}

TEST(Solution17_t, test0)
{
	Solution17 test;
	vector<int> in({ -1, 0, 1, 2, -1, -4 });
	EXPECT_EQ(test.letterCombinations("23"),
		vector<string>({ "ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf" }));
	EXPECT_EQ(test.letterCombinations("7"),
		vector<string>({ "p","q","r","s" }));
}