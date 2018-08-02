#pragma once

#include "leetcode_defs.h"

class Solution41
{
public:
	Solution41();
	~Solution41();

	int firstMissingPositive(vector<int>& nums) {
		int n = nums.size() < 1 ? 1 : nums.size();
		for (int i = 0; i < nums.size(); ++i) {
			int j = i;
			int pos = nums[j];
			while (pos < nums.size() && nums[pos] != pos) {
				int x = nums[pos];
				nums[pos] = pos;
				pos = x;
			}
			if (pos == nums.size()) {
				++n;
			}
		}

		for (int i = 1; i < nums.size(); ++i) {
			if (nums[i] != i) return i;
		}

		return n;
	}
};

