#include "Solution54.h"



Solution54::Solution54()
{
}


Solution54::~Solution54()
{
}

TEST(Solution54_t, test1)
{
	Solution54 test;
	vector<vector<int>> in({
		vector<int>({ 1, 2, 3, 4 }),
		vector<int>({ 5, 6, 7, 8 }),
		vector<int>({ 9,10,11,12 })
		});

	vector<int> out({ 1,2,3,4,8,12,11,10,9,5,6,7 });
	EXPECT_EQ(test.spiralOrder(in), out);
}

TEST(Solution54_t, test3)
{
	Solution54 test;
	vector<vector<int>> in({
		vector<int>({ 1, 2, 3 }),
		vector<int>({ 4, 5, 6 }),
		vector<int>({ 7, 8, 9 }),
		});

	vector<int> out({ 1,2,3,6,9,8,7,4,5 });
	EXPECT_EQ(test.spiralOrder(in), out);
}
