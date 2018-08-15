#pragma once

#include "leetcode_defs.h"

class Solution_4
{
public:
	Solution_4();
	~Solution_4();

	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		auto n = nums1.size();
		auto m = nums2.size();

		if (n > m) {
			std::swap(nums1, nums2);
		}
		n = nums1.size();
		m = nums2.size();
		
		int mid = (n + m) / 2;
		return 0;
	}
};

