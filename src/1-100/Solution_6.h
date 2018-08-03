#pragma once

#include "leetcode_defs.h"

class Solution_6
{
public:
	Solution_6();
	~Solution_6();

	string convert(string s, int numRows) {
		if (numRows == 1) return s;
		// 2: 1, 0; 0, 1
		// 3: 3, 0; 1, 1; 0,3
		// 4: 5, 0; 3, 1; 1,3; 0, 5
		// 5£º7, 0; 5, 1, 3,3, 1,5, 0, 7
		string res;
		for (int i = 0; i < numRows; ++i) {
			int l = numRows * 2 - 2 - i * 2;
			int r = numRows * 2 - 2 - l;
			for (int j = i; j < s.size(); ) {
				if (l != 0) {
					res += s.at(j);
					j += l;
				}
				if (j >= s.size()) {
					break;
				}
				if (i == 0) {
					continue;
				}
				res += s.at(j);
				j += r;
			}
		}

		return res;
	}
};

