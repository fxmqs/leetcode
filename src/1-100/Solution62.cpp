#include "Solution62.h"



Solution62::Solution62()
{
}


Solution62::~Solution62()
{
}



TEST(Solution62_t, test2)
{
	Solution62 test;
	for (int i = 1; i <= 10; ++i)
		printf("7:%d = %d\n", i, test.uniquePaths(7, i));


	for (int i = 1; i <= 10; ++i)
		printf("10:%d = %d\n", i, test.uniquePaths(10, i));

	for (int i = 1; i <= 10; ++i)
		printf("%d:%d = %d\n", i, i, test.uniquePaths(i, i));

	for (int i = 1; i <= 10; ++i) {
		for (int j = 1; j <= 10; ++j) {
			EXPECT_EQ(test.uniquePaths(i, j), test.dfs(1, 1, i, j));
		}
	}

	printf("7:%d = %d\n", 1, test.uniquePaths(7, 1));
}