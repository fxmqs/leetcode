#pragma once

#include "leetcode_defs.h"

class Solution53
{
public:
	Solution53();
	~Solution53();

	int maxSubArray(vector<int>& nums) {
		if (nums.empty()) {
			return 0;
		}

		int res = nums[0];
		int sum = 0;
		for (int i = 0; i < nums.size(); ++i) {
			sum += nums[i];

			if (sum > res) {
				res = sum;
			}

			if (sum < 0) {
				sum = 0;
			}
		}

		return res;
	}
};

