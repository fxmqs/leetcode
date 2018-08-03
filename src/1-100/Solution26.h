#pragma once

#include "leetcode_defs.h"

class Solution26
{
public:
	Solution26();
	~Solution26();

	int removeDuplicates(vector<int>& nums) {
		if (nums.empty()) return 0;
		int k = 1;
		for (int i = 1; i < nums.size(); ++i) {
			if (nums[k-1] == nums[i]) continue;
			nums[k++] = nums[i];
		}
		return k;
	}
};

