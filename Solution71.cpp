#include "Solution71.h"

Solution71::Solution71()
{
}


Solution71::~Solution71()
{
}

TEST(Solution_71, test2)
{
	Solution71 test;
	EXPECT_EQ(test.simplifyPath("/.."), "/");

	EXPECT_EQ(test.simplifyPath("/a/./b/../../c/"), "/c");


}