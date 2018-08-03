#pragma once

#include "leetcode_defs.h"

class Solution46
{
public:
	Solution46();
	~Solution46();

	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		if (nums.empty()) return res;
		sort(nums.begin(), nums.end());

		res.push_back(nums);
		while (next_permutation(nums.begin(), nums.end())) res.push_back(nums);
		return res;
	}
};

