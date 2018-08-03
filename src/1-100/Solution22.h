#pragma once

#include "leetcode_defs.h"

class Solution22
{
public:
	Solution22();
	~Solution22();

	void dfs(char *buf, int l, int r, int n, vector<string>&res) {
		if (l == r && r == n) {
			res.push_back(buf);
			return;
		}
		
		if (l < n) {
			buf[l + r] = '(';
			dfs(buf, l + 1, r, n, res);
		}

		if (r < l) {
			buf[l + r] = ')';
			dfs(buf, l, r + 1, n, res);
		}
 	}

	vector<string> generateParenthesis(int n) {
		vector<string> res;
		if (n == 0) return res;

		char buf[1024] = { 0 };
		dfs(buf, 0, 0, n, res);

		return res;
	}
};

