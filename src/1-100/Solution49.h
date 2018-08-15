#pragma once

#include "leetcode_defs.h"

class Solution49
{
public:
	Solution49();
	~Solution49();

	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		std::map<string, int> dict;
		vector<vector<string>> res;
		for (auto x : strs) {
			string tmp = x;
			sort(x.begin(), x.end());
			auto it = dict.find(x);
			if (it == dict.end()) {
				dict[x] = res.size();
				res.push_back(vector<string>());
				res[res.size() - 1].push_back(tmp);
			}
			else {
				res[it->second].push_back(tmp);
			}
		}
		return res;
	}
};

