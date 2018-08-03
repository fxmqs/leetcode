#include "Solution24.h"



Solution24::Solution24()
{
}


Solution24::~Solution24()
{
}

TEST(Solution24_t, test0)
{
	Solution24 test;

	ListNode* l1 = stringToListNode("[1, 2, 4]");
	ListNode* res = test.swapPairs(l1);
	std::string format_res = listNodeToString(res);
	EXPECT_EQ(format_res, "[2, 1, 4]");
}

TEST(Solution24_t, test1)
{
	Solution24 test;

	ListNode* l1 = stringToListNode("[1, 2, 3, 4]");
	ListNode* res = test.swapPairs(l1);
	std::string format_res = listNodeToString(res);
	EXPECT_EQ(format_res, "[2, 1, 4, 3]");
}