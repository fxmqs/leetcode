#include "Solution_4.h"



Solution_4::Solution_4()
{
}


Solution_4::~Solution_4()
{
}


TEST(Solution_4testCase, test0)
{
	Solution_4 test;

	vector<int> nums1 = stringToIntegerVector("[1, 3]");
	vector<int> nums2 = stringToIntegerVector("[2]");

	double ret = Solution_4().findMedianSortedArrays(nums1, nums2);

	string out = "[7, 0, 8]";

	cout << out << endl;
	EXPECT_EQ(out, "[7, 0, 8]");
}
