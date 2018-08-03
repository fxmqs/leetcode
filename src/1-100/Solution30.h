#pragma once

#include "leetcode_defs.h"

class Solution30
{
public:
	Solution30();
	~Solution30();

	vector<int> findSubstring(string s, vector<string>& words) {
		vector<int> res;
		if (s.empty() || words.empty()) {
			return res;
		}

		int len = words[0].size() * words.size();
		if (s.size() < len) {
			return res;
		}

		/// 每个子串hash，以及出现次数
		unordered_map<string, int> hash;
		map<int, int> mark_count;
		for (int i = 0; i < words.size(); ++i) {
			if (!hash.count(words[i])) hash[words[i]] = i;
			++mark_count[hash[words[i]]];
		}

		/// 子串匹配标识
		vector<int> mark;
		for (int i = 0; i < s.size(); ++i) {
			mark.push_back(-1);
		}

		int wordlen = words[0].size();
		for (int i = 0; i < s.size() - wordlen + 1; ++i) {
			auto it = hash.find(s.substr(i, wordlen));
			if (it != hash.end()) {
				mark[i] = it->second;
			}
		}

		/// 标识计算
		for (int i = 0; i < s.size() - len + 1; ++i) {
			std::map<int, int> marks;
			int count = words.size();
			for (int j = i; j < s.size() && count--; j += wordlen) {
				if (-1 == mark[j]) {
					break;
				}
				marks[mark[j]]++;
			}

			if (marks == mark_count) res.push_back(i);
		}

		return res;
	}

};

