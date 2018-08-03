#include "Solution_3.h"

Solution_3::Solution_3()
{
}


Solution_3::~Solution_3()

{
}

TEST(Solution_3, test2)
{
	Solution_3 test;

	int ret = test.lengthOfLongestSubstring("abcabcbb");
	EXPECT_EQ(ret, 3);

	ret = test.lengthOfLongestSubstring("aaaaaaaaaaaaaa");
	EXPECT_EQ(ret, 1);

	ret = test.lengthOfLongestSubstring("pwwkew");
	EXPECT_EQ(ret, 3);

	ret = test.lengthOfLongestSubstring("tmmzuxt");
	EXPECT_EQ(ret, 5);
}