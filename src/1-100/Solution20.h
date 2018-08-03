#pragma once

#include "leetcode_defs.h"

class Solution20
{
public:
	Solution20();
	~Solution20();

	bool isleft(char c) {
		return c == '(' || c == '[' || c == '{';
	}

	bool isright(char l, char r) {
		if (l == '(' && r == ')') return true;
		if (l == '[' && r == ']') return true;
		if (l == '{' && r == '}') return true;

		return false;
	}

	bool isValid(string s) {
		vector<char> cq;
		for (auto x : s) {
			if (cq.empty()) {
				cq.push_back(x);
				continue;
			}

			if (isright(cq.back(), x)) {
				cq.pop_back();
			}
			else if (isleft(x)) {
				cq.push_back(x);
			}
			else {
				return false;
			}
		}
		return cq.empty();
	}
};

