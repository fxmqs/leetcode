#include "Solution19.h"



Solution19::Solution19()
{
}


Solution19::~Solution19()
{
}

TEST(Solution19_t, test0)
{
	Solution19 test;

	ListNode* l1 = stringToListNode("[8, 8, 9, 2, 8, 7, 2, 0, 2, 4]");
	ListNode* res = test.removeNthFromEnd(l1, 7);
	std::string format_res = listNodeToString(res);
	EXPECT_EQ(format_res, "[8, 8, 9, 8, 7, 2, 0, 2, 4]");
}