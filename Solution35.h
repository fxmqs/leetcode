#pragma once

#include "leetcode_defs.h"

class Solution35
{
public:
	Solution35();
	~Solution35();

	int searchInsert(vector<int>& nums, int target) {
		if (nums.empty()) return 0;
		auto it = lower_bound(nums.begin(), nums.end(), target);
		return it - nums.begin();
	}
};

