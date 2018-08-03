#pragma once

#include "leetcode_defs.h"

class Solution18
{
public:
	Solution18();
	~Solution18();

	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		if (nums.empty()) {
			return vector<vector<int>>();
		}

		std::sort(nums.begin(), nums.end());

		std::set<std::tuple<int, int, int, int>> res;
		for (int i = 0; i < nums.size() - 3; ++i) {
			if (4 * nums[i] > target) break;
			for (int j = i + 1; j < nums.size() - 2; ++j) {
				if (nums[i] + 3 * nums[j] > target) break;
				int n = j + 1;
				int m = nums.size() - 1;
				int sumij = nums[i] + nums[j];

				while (n < m) {
					if (sumij + nums[n] * 2 > target) break;
					int sum = sumij + nums[n] + nums[m];
					if (sum == target) {
						res.insert(make_tuple(nums[i], nums[j], nums[n], nums[m]));
						++n;
					}
					else if (sum > target) {
						--m;
					}
					else {
						++n;
					}
				}
			}
		}

		vector<vector<int>> retVal;
		for (auto x : res) {
			retVal.push_back({ std::get<0>(x), std::get<1>(x), std::get<2>(x), std::get<3>(x)});
		}

		return retVal;
	}
};

