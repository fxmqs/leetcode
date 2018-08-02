#include "Solution25.h"



Solution25::Solution25()
{
}


Solution25::~Solution25()
{
}

TEST(Solution25_t, test1)
{
	Solution25 test;

	ListNode* l1 = stringToListNode("[1, 2, 3, 4]");
	ListNode* res = test.reverseKGroup(l1, 2);
	std::string format_res = listNodeToString(res);
	EXPECT_EQ(format_res, "[2, 1, 4, 3]");
}

TEST(Solution25_t, test2)
{
	Solution25 test;

	ListNode* l1 = stringToListNode("[1, 2, 3, 4, 5]");
	ListNode* res = test.reverseKGroup(l1, 3);
	std::string format_res = listNodeToString(res);
	EXPECT_EQ(format_res, "[3, 2, 1, 4, 5]");
}