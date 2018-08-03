#pragma once

#include "leetcode_defs.h"

class Solution31
{
public:
	Solution31();
	~Solution31();

	void nextPermutation(vector<int>& nums) {
		if (nums.size() < 2) return;
		int i = nums.size() - 1;

		/// 寻找右侧开始最大的非递减数
		for (; i > 0; --i) {
			if (nums[i - 1] < nums[i]) break;
		}

		if (i == 0) {
			sort(nums.begin(), nums.end());
			return;
		}

		/// 寻找大于左侧数字最小数
		int k = nums[i - 1];
		int j = i;
		int pos = i;
		int val = nums[i];
		for (; j < nums.size(); ++j) {
			if (nums[j] > nums[i-1] && nums[j] <= val) {
				val = nums[j];
				pos = j;
			}
		}

		/// 交换
		swap(nums[i - 1], nums[pos]);

		/// 逆序
		j = nums.size() - 1;
		while (i < j) {
			swap(nums[i++], nums[j--]);
		}
	}
};

