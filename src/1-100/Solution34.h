#pragma once

#include "leetcode_defs.h"

class Solution34
{
public:
	Solution34();
	~Solution34();

	vector<int> searchRange(vector<int>& nums, int target) {
		if (nums.empty()) {
			return { -1, -1 };
		}

		int l = 0;
		int r = nums.size() - 1;
		int lpos = (l + r) / 2;
		while (l < r) {
			if (nums[lpos] >= target) {
				r = lpos - 1;
			}
			else {
				l = lpos + 1;
			}

			lpos = (l + r) / 2;
		}

		if (nums[lpos + (lpos < nums.size() - 1)] != target && nums[lpos] != target) {
			return { -1, -1 };
		}
		lpos += nums[lpos] != target;

		l = 0;
		r = nums.size() - 1;
		int rpos = (l + r) / 2;

		while (l < r) {
			if (nums[rpos] <= target) {
				l = rpos + 1;
			}
			else {
				r = rpos - 1;
			}

			rpos = (l + r) / 2;
		}

		rpos -= nums[rpos] != target;

		return { lpos, rpos };
	}
};

