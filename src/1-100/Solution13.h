#pragma once

#include "leetcode_defs.h"

class Solution13
{
public:
	Solution13();
	~Solution13();

	int romanToInt(string s) {
		std::map<string, int> x;
		x["I"] = 1;
		x["IV"] = 4;
		x["V"] = 5;
		x["IX"] = 9;
		x["X"] = 10;
		x["XL"] = 40;
		x["L"] = 50;
		x["XC"] = 90;
		x["C"] = 100;
		x["CD"] = 400;
		x["D"] = 500;
		x["CM"] = 900;
		x["M"] = 1000;

		int i = 0;
		int res = 0;
		for (i = 0; i < s.size() - 1; ++i) {
			if (x.count(s.substr(i, 2))) {
				res += x[s.substr(i, 2)];
				++i;
				continue;
			}
			res += x[s.substr(i, 1)];
		}

		res += x[s.substr(i, 1)];

		return res;
	}
};

