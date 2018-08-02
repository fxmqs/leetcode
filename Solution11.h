#pragma once

#include "leetcode_defs.h"

class Solution11
{
public:
	Solution11();
	~Solution11();

	//int maxArea(vector<int>& height) {
	//	int res = 0;
	//	for (int i = 0; i < height.size(); ++i) {
	//		int h = height[i];
	//		for (int j = i + 1; j < height.size(); ++j) {
	//			h = height[j] < height[i] ? height[j] : height[i];
	//			if (res < h * (j - i)) res = h * (j - i);
	//		}
	//	}

	//	return res;
	//}


	int maxArea(vector<int>& height) {
		int res = 0;
		int i = 0;
		int j = height.size() - 1;
		while (i < j) {
			res = std::max(res, std::min(height[i], height[j]) * (j - i));
			height[i] < height[j] ? ++i : --j;
		}

		return res;
	}
};

