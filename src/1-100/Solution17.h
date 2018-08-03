#pragma once

#include "leetcode_defs.h"

class Solution17
{
public:
	Solution17();
	~Solution17();

	void dfs(vector<string> &res, char *buf, int len, const char *s) {
		if (!*s) {
			res.push_back(buf);
			return;
		}
		char c = 'a' + (*s - '2') * 3;
		int cl = 3;

		if (*s == '7') {
			cl = 4;
		}
		if (*s == '8') {
			c = 't';
		}
		if (*s == '9') {
			c = 'w';
			cl = 4;
		}
		for (int i = 0; i < cl; ++i) {
			buf[len] = c + i;
			dfs(res, buf, len + 1, s + 1);
		}
	}

	vector<string> letterCombinations(string digits) {
		vector<string> res;

		if (digits.empty()) return res;

		char buf[1024] = { 0 };
		dfs(res, buf, 0, digits.c_str());

		return res;
	}

};

