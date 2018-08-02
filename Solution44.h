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

	bool isMatch(string s, string p) {
		if (s.empty() && p.empty()) return true;
		if (s.empty()) {
			if (p.size() == 1 && p.at(0) == '*') return true;
			return false;
		}

		/// Ëæ±ã¼ô¸öÖ¦
		int l = 0;
		int pre_l = 0;
		for (; l < p.size(); ++l) {
			if (p.at(l) == '*') break;
			else if (s.size() == l) {
				for (int i = l; i < p.size(); ++i) {
					if (p[i] == '*') continue;
					else return false;
				}
				return true;
			}
			else if (p.at(l) == '?' || p.at(l) == s.at(l)) {
				++pre_l;
				continue;
			}
			return false;
		}
		if (l == p.size()) return dfs(s.c_str(), p.c_str());
		int r = 1;
		for (; p.size() - r > l; ++r) {
			if (p.at(p.size() - r) == '*') break;
			else if (s.size() - pre_l + 1 == r) {
				for (int i = l; i < p.size() - r; ++i) {
					if (p[i] == '*') continue;
					else return false;
				}
				return true;
			}
			else if (p.at(p.size() - r) == '?' || p.at(p.size() - r) == s.at(s.size() - r)) continue;
			return false;
		}
		
		return dfs(s.c_str(), p.c_str());
	}
};

