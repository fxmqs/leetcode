#pragma once

#include "leetcode_defs.h"

class Solution45
{
public:
	Solution45();
	~Solution45();

	void dfs(vector<int>& nums, vector<int>& mark, int pos, int n) {
		if (pos != 0 && mark[pos] <= n) {
			return;
		}

		mark[pos] = n;
		if (pos == nums.size() - 1) {
			return;
		}

		if (n+1 >= mark[nums.size() - 1]) {
			return;
		}

		for (int i = min<int>(nums.size() - pos - 1, nums[pos]); i >= 1; --i) {
			if (i + pos < nums.size()) {
				dfs(nums, mark, i + pos, n + 1);
			}
		}
	}

	int jump(vector<int>& nums) {
		if (nums.size() <= 1) return 0;

		vector<int> mark;
		for (int i = 0; i < nums.size(); ++i) mark.push_back(i + 1);

		dfs(nums, mark, 0, 0);
		return mark[nums.size() - 1];
	}
};

