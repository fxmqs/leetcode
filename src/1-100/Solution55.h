#pragma once

#include "leetcode_defs.h"

class Solution55
{
public:
	Solution55();
	~Solution55();

	vector<bool> m_mark;

	bool dfs(int x, int s, vector<int>& nums) {
		for (; x < nums.size(); ++x) {
			if (m_mark[x]) {
				if (x + nums[x] >= m_mark.size() - 1) {
					return true;
				}

				int nx = max(s, x + nums[x]);
				for (int i = s; i < nx+1; ++i) {
					m_mark[i] = true;
				}
				s = nx;
			}
		}

		return false;
	}

	bool canJump(vector<int>& nums) {
		if (nums.empty()) {
			return false;
		}
		m_mark = vector<bool>(nums.size(), false);

		m_mark[0] = true;
		return dfs(0, 0, nums);
	}
};

