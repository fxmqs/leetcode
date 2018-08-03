#include "TwoSum_2.h"


#include "leetcode_defs.h"

TwoSum_2::TwoSum_2()
{
}


TwoSum_2::~TwoSum_2()
{
}




TEST(testCase, test0)
{
	TwoSum_2 test;

	ListNode* l1 = stringToListNode("[2, 4, 3]");
	ListNode* l2 = stringToListNode("[5, 6, 4]");

	ListNode* ret = test.addTwoNumbers(l1, l2);

	string out = listNodeToString(ret);
	cout << out << endl;
	EXPECT_EQ(out, "[7, 0, 8]");
}

TEST(testCase, test1)
{
	TwoSum_2 test;

	ListNode* l1 = stringToListNode("[9]");
	ListNode* l2 = stringToListNode("[9, 9, 9]");

	ListNode* ret = test.addTwoNumbers(l1, l2);

	string out = listNodeToString(ret);
	cout << out << endl;
	EXPECT_EQ(out, "[8, 0, 0, 1]");
}
TEST(testCase, test2)
{
	TwoSum_2 test;

	ListNode* l1 = stringToListNode("[1, 8]");
	ListNode* l2 = stringToListNode("[0]");

	ListNode* ret = test.addTwoNumbers(l1, l2);

	string out = listNodeToString(ret);
	cout << out << endl;
	EXPECT_EQ(out, "[1, 8]");
}