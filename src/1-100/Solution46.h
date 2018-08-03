<<<<<<< HEAD:Solution46.h
#pragma once

#include "leetcode_defs.h"

class Solution46
{
public:
	Solution46();
	~Solution46();

	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		if (nums.empty()) return res;
		sort(nums.begin(), nums.end());

		res.push_back(nums);
		while (next_permutation(nums.begin(), nums.end())) res.push_back(nums);
		return res;
	}
};

=======
#pragma once

#include "leetcode_defs.h"

class Solution46
{
public:
	Solution46();
	~Solution46();

	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		if (nums.empty()) return res;
		sort(nums.begin(), nums.end());

		while (next_permutation(nums.begin(), nums.end())) res.push_back(nums);
		return res;
	}
};

>>>>>>> 6709d612f9a65776969cfa4e236b5129704fe0ec:src/1-100/Solution46.h
