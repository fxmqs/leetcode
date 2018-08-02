#pragma once

#include "leetcode_defs.h"

class Solution42
{
public:
	Solution42();
	~Solution42();

	int trap(vector<int>& height, int l, int r, int pos) {
		if (l >= r) return 0;

		int next = l + (l == pos);

		for (int i = l + (l == pos); i < r; ++i) {
			if (height[i] > height[next]) {
				next = i;
			}
		}

		int res = 0;
		if (l == pos) {
			for (int i = pos + 1; i < next; ++i) {
				res += (height[next] - height[i]);
			}

			res += trap(height, next, r, next);
		}
		else {
			for (int i = next; i < r; ++i) {
				res += (height[next] - height[i]);
			}

			res += trap(height, l, next, next);
		}

		return res;
	}

	int trap(vector<int>& height) {
		if (height.empty()) return 0;

		int l = 0;
		int r = height.size();
		int pos = 0;
		int max = height[0];

		for (int i = 0; i < r; ++i) {
			if (height[i] > height[pos]) {
				pos = i;
			}
		}

		int res = trap(height, l, pos, pos);
		res += trap(height, pos, r, pos);

		return res;
	}
};

