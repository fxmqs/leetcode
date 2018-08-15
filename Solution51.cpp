#include "Solution51.h"



Solution51::Solution51()
{
}


Solution51::~Solution51()
{
}

TEST(Solution_51, test2)
{
	Solution51 test;
	vector<vector<string>> res({
		vector<string>({ ".Q..",
			"...Q",
			"Q...",
			"..Q." }),

		vector<string>({ "..Q.",
			"Q...",
			"...Q",
			".Q.." })
		});
	EXPECT_EQ(test.solveNQueens(4), res);

}