#pragma once

#include "leetcode_defs.h"

class Solution15
{
public:
	Solution15();
	~Solution15();

	vector<vector<int>> threeSum(vector<int>& nums) {
		std::sort(nums.begin(), nums.end());

		std::set<std::tuple<int, int>> res;
		for (int i = 0; i < nums.size() && nums[i] <= 0; ++i) {
			for (int j = i + 1; j < nums.size(); ++j) {
				if (nums[i] + nums[j] > 0) break;
				int val = 0 - nums[i] - nums[j];
				if (binary_search(nums.begin() + j + 1, nums.end(), val))
					res.insert(std::make_tuple(nums[i], nums[j]));

				//for (int k = j + 1; k < nums.size(); ++k) {
				//	if (nums[k] == val)
				//		res.insert(std::make_tuple(nums[i], nums[j]));
				//}
			}
		}

		vector<vector<int>> retVal;
		for (auto x : res) {
			retVal.push_back({ std::get<0>(x), std::get<1>(x), 0 - std::get<0>(x) - std::get<1>(x) });
		}

		return retVal;
	}
};

