#pragma once

#include "leetcode_defs.h"

class Solution16
{
public:
	Solution16();
	~Solution16();

	int threeSumClosest(vector<int>& nums, int target) {
		std::sort(nums.begin(), nums.end());

		int res = nums[0] + nums[1] + nums[2];
		for (int i = 0; i < nums.size()-2; ++i) {
			for (int j = i + 1; j < nums.size()-1; ++j) {
				int val = target - nums[i] - nums[j];
				auto k = lower_bound(nums.begin() + j + 1, nums.end(), val);
				if (k != nums.end()) {
					val = nums[i] + nums[j] + *k;
					if (abs(val - target) < abs(res - target)) {
						res = val;
					}
				}
				if (--k == nums.begin() + j) continue;

				val = nums[i] + nums[j] + *k;
				if (abs(val - target) < abs(res - target)) {
					res = val;
				}

				if (res == target) return res;
			}
		}

		return res;
	}
};

