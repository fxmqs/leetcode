#pragma once

#include "leetcode_defs.h"

class Solution44
{
public:
	Solution44();
	~Solution44();

	bool dfs(const char *s, const char *p) {
		if (!*s && !*p) {
			return true;
		}

		if (!*s) {
			if (*p == '*') return dfs(s, p + 1);
			else return false;
		}

		if (!*p) return false;

		if (*p == '?' || *s == *p) {
			return dfs(s + 1, p + 1);
		}
		if (*p == '*') {
			const char *n = p;
			while (*n == '*') ++n;
			if (dfs(s, n)) return true;
			if (dfs(s + 1, p)) return true;
			if (dfs(s + 1, n)) return true;
		}

		return false;
	}

	bool findAllSubStrings(string s, vector<string> &substrings) {
		int l = 0;
		for (int i = 0; i < substrings.size(); ++i) {
			int j = l;
			for (; j < s.size(); ++j) {
				int k = 0;
				for (; k < substrings[i].size(); ++k) {
					if (j + k == s.size()) return false;

					if (s[j + k] == substrings[i][k] || substrings[i][k] == '?') continue;
					break;
				}

				if (k == substrings[i].size()) break;
			}

			l = j + substrings[i].size();
		}

		return l <= s.size();
	}

	bool isMatch(string s, string p) {
		if (s.empty() && p.empty()) return true;
		if (s.empty()) {
			if (p.size() == 1 && p.at(0) == '*') return true;
			return false;
		}

		/// 判断 * 的数量，一个就爆搞了
		int count = 0;
		for (int i = 0; i < p.size(); ++i) {
			if (p[i] == '*') {
				++count;
				for (; i < p.size() && p[i] == '*'; ++i);
			}
		}

		if (count <= 1) return dfs(s.c_str(), p.c_str());

		/// 左右剪枝
		int i = 0;
		for (; i < p.size(); ++i) {
			if (p[i] == '*') {
				break;
			}

			if (i == s.size()) return false;
			if (s[i] == p[i] || p[i] == '?') continue;
			return false;
		}

		int r = p.size() - 1;
		for (; r >= 0; --r) {
			if (p[r] == '*') break;

			int rs = s.size() - p.size() + r;
			if (rs < 0) return false;
			if (p[r] == s[rs] || p[r] == '?') continue;
			return false;
		}

		/// 裁剪子串
		int rs = s.size() - p.size() + r + 1;
		s = s.substr(i, rs - i);
		vector<string> substrings;
		string res = "";
		for (; i < r; ++i) {
			if (p[i] == '*') {
				if (!res.empty()) {
					substrings.push_back(res);
					res = "";
				}
				continue;
 			}
			res += p[i];
		}
		if (!res.empty()) substrings.push_back(res);

		return findAllSubStrings(s, substrings);

	}
};

