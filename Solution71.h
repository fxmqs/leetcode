#pragma once

#include "leetcode_defs.h"

class Solution71
{
public:
	Solution71();
	~Solution71();

	void split(string& s, const string& delim, vector<string>& ret)
	{
		ret.clear();
		size_t last = 0;
		size_t index = s.find_first_of(delim, last);
		while (index != string::npos)
		{
			ret.push_back(s.substr(last, index - last));
			last = index + 1;
			index = s.find_first_of(delim, last);
		}
		if (index - last>0)
		{
			ret.push_back(s.substr(last, index - last));
		}
	}

	string simplifyPath(string path) {
		if (path.empty()) return "";
		vector<string> ss;
		split(path, "/", ss);
		deque<string> res;
		for (auto s : ss) {
			if (s == "..") {
				if (!res.empty()) res.pop_back();
			}
			else if (s == "." || s.empty()) continue;
			else res.push_back(s);
		}

		string s;
		for (auto x : res) {
			s += "/" + x;
		}

		return s.empty() ? "/" : s;
	}
};

