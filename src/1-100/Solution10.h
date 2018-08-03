#pragma once

#include "leetcode_defs.h"

class Solution10
{
public:
	Solution10();
	~Solution10();

	bool dfs(const char *s, const char *p) {
		if (!*p && !*s) return true;
		if (!*s) {
			while (*p) ++p;
			return *(p - 1) == '*';
		}
		if (*p == '*') return false;
		
		/// 处理下*号，只有一个字符可以*，并非前面字符串中任意字符，无需如此复杂。
		const char *s1 = s;
		for (const char *p1 = p; *p1; ++p1) {
			if (*p1 == '*') {
				if (dfs(s, p1 + 1)) return true;
				else {
					const char *p2 = p;
					for (; p2 != p1; ++p2, ++s1) {
						if (*p2 == '.' || *s1 == *p2) continue;
						break;
					}
					if (p2 == p1) if (dfs(s1, p)) return true;
				}
			}
		}

		/// 匹配单个字符
		if (*s == *p || *p == '.') {
			if (dfs(s + 1, p + 1)) return true;
		}

		return false;
	}

	bool dfs_easy(const char *s, const char *p) {
		if (!*p && !*s) return true;
		if (!*p) return false;
		if (!*s) {
			while (*p && *(p + 1) == '*') p += 2;
			return !*p;
		}

		if (*p && *(p + 1) == '*') {
			if (dfs_easy(s, p + 2)) return true;
			if (*s == *p || *p == '.') if (dfs_easy(s + 1, p)) return true;
		}

		if (*s == *p || *p == '.') if (dfs_easy(s + 1, p + 1)) return true;
		return false;
	}

	bool isMatch(string s, string p) {
		if (s.empty() && p.empty()) return true;
		if (p.empty()) return false;
		return dfs_easy(s.c_str(), p.c_str());
	}
};

