#pragma once

#include "leetcode_defs.h"

class Solution33
{
public:
	Solution33();
	~Solution33();

	int search(vector<int>& nums, int target) {
		int l = 0;
		int r = nums.size() - 1;
		int n = (l + r) / 2;
		while (l < r) {
			if (nums[n] > nums[l] && nums[n] > nums[r]) {
				l = n + 1;
			}
			else if (nums[n] < nums[l] && nums[n] < nums[r]) {
				r = n;
			}
			else if (nums[r] < nums[l]) {
				l = r;
			}
			else {
				r = l;
			}

			n = (l + r) / 2;
		}

		auto x = lower_bound(nums.begin(), nums.begin() + n, target);
		if (x != nums.end()) if (*x == target) return x - nums.begin();
		auto y = lower_bound(nums.begin() + n, nums.end(), target);
		if (y != nums.end()) if (*y == target) return y - nums.begin();

		return -1;
	}

};

