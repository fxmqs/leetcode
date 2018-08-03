#pragma once

#include "leetcode_defs.h"

class Solution39
{
public:
	Solution39();
	~Solution39();

	void dfs(vector<int>& candidates, int pos, int val, int target, vector<int> k, vector<vector<int>>& res) {
		if (val > target) {
			return;
		}

		if (val == target) {
			res.push_back(k);
			return;
		}
		
		if (val < target) {
			k.push_back(candidates[pos]);
			dfs(candidates, pos, val + candidates[pos], target, k, res);
			k.pop_back();

			if (pos + 1 < candidates.size()) {
				dfs(candidates, pos + 1, val, target, k, res);
			}
		}
	}

	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		std::sort(candidates.begin(), candidates.end());
		vector<vector<int>> res;
		vector<int> k;
		if (!candidates.empty()) dfs(candidates, 0, 0, target, k, res);
		return res;
	}
};

