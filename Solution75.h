#pragma once

#include "leetcode_defs.h"

class Solution75
{
public:
	Solution75();
	~Solution75();

	void sortColors(vector<int>& nums) {
		vector<int> count(3, 0);

		for (auto x : nums) {
			++count[x];
		}

		int k = 0;
		for (int i = 0; i < 3; ++i)
			for (int j = 0; j < count[i]; ++j)
				nums[k++] = i;
	}
};

