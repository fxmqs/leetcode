#include "Solution16.h"



Solution16::Solution16()
{
}


Solution16::~Solution16()
{
}

TEST(Solution16_t, test0)
{
	Solution16 test;
	vector<int> in({ -1, 0, 1, 2, -1, -4 });
	EXPECT_EQ(test.threeSumClosest(in, 0), 0);

	in = vector<int>({ -1,2,1,-4 });
	EXPECT_EQ(test.threeSumClosest(in, 1), 2);
}