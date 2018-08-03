#include "Solution21.h"



Solution21::Solution21()
{
}


Solution21::~Solution21()
{
}

TEST(Solution21_t, test0)
{
	Solution21 test;

	ListNode* l1 = stringToListNode("[1, 2, 4]");
	ListNode* l2 = stringToListNode("[1, 3, 4]");
	ListNode* res = test.mergeTwoLists(l1, l2);
	std::string format_res = listNodeToString(res);
	EXPECT_EQ(format_res, "[1, 1, 2, 3, 4, 4]");
}