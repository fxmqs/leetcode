#pragma once

#include "leetcode_defs.h"

class Solution40
{
public:
	Solution40();
	~Solution40();

	void dfs(vector<int>& candidates, int pos, int val, int target, vector<int> k, vector<vector<int>>& res) {
		if (val > target) {
			return;
		}

		if (val == target) {
			for (auto x : res) if (x == k) return;
			res.push_back(k);
			return;
		}

		if (val < target) {
			if (pos < candidates.size()) {
				k.push_back(candidates[pos]);
				dfs(candidates, pos + 1, val + candidates[pos], target, k, res);
				k.pop_back();
			}

			if (pos + 1 < candidates.size()) {
				dfs(candidates, pos + 1, val, target, k, res);
			}
		}
	}

	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		std::sort(candidates.begin(), candidates.end());
		vector<vector<int>> res;
		vector<int> k;
		if (!candidates.empty()) dfs(candidates, 0, 0, target, k, res);
		return res;
	}
};

