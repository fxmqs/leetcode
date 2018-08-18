#include "Solution56.h"



Solution56::Solution56()
{
}


Solution56::~Solution56()
{
}


TEST(Solution56_t, test1)
{
	Solution56 test;
	vector<Interval> in({ { 1, 3 },{ 2, 6 },{ 8, 10 },{ 15, 18 } });
	vector<Interval> out({ { 1, 6 },{ 8, 10 },{ 15, 18 } });

	EXPECT_EQ(test.merge(in), out);
}

TEST(Solution56_t, test2)
{
	Solution56 test;
	vector<Interval> in({ { 1, 4 },{ 2, 3 }});
	vector<Interval> out({ { 1, 4 } });

	EXPECT_EQ(test.merge(in), out);
}