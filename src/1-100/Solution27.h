#pragma once

#include "leetcode_defs.h"

class Solution27
{
public:
	Solution27();
	~Solution27();

	int removeElement(vector<int>& nums, int val) {
		int k = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (val == nums[i]) continue;
			nums[k++] = nums[i];
		}
		return k;
	}
};

