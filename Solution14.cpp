#include "Solution14.h"



Solution14::Solution14()
{
}


Solution14::~Solution14()
{
}

TEST(Solution14_t, test0)
{
	Solution14 test;
	vector<string> strs;
	strs.push_back("flower");
	strs.push_back("flow");
	strs.push_back("flight");
	EXPECT_EQ(test.longestCommonPrefix(strs), string("fl"));
}