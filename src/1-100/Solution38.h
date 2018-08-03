#pragma once

#include "leetcode_defs.h"

class Solution38
{
public:
	Solution38();
	~Solution38();

	string countAndSay(int n) {
		if (n == 1) return "1";
		std::string x = countAndSay(n - 1);
		std::string s;
		for (int i = 0; i < x.size(); ) {
			int j = i;
			for (; j < x.size(); ++j) if (x.at(j) != x.at(i)) break;
			char buf[32] = { 0 };
			sprintf(buf, "%d", j - i);
			s += buf;
			s += x.at(i);
			i = j;
		}

		return s;
	}
};

