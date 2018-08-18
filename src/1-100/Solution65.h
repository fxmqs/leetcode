#pragma once

#include "leetcode_defs.h"

class Solution65
{
public:
	Solution65();
	~Solution65();

	string& trim(string &s)
	{
		if (s.empty())
		{
			return s;
		}

		s.erase(0, s.find_first_not_of(" "));
		s.erase(s.find_last_not_of(" ") + 1);
		return s;
	}

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

	bool onlyNumber(string s, bool empty = false) {
		if (s.empty()) return empty;
		for (auto x : s) {
			if (x < '0' || x > '9') return false;
		}

		return true;
	}

	bool prefixCheck(string &s) {
		if (s.empty()) return true;

		vector<string> ss;
		if (s[0] == '-') {
			s = s.substr(1, s.size() - 1);

			split(s, "-", ss);
			if (ss.size() > 1) return false;
			split(s, "+", ss);
			if (ss.size() > 1) return false;
		}

		if (s.empty()) return true;

		if (s[0] == '+') {
			s = s.substr(1, s.size() - 1);

			split(s, "-", ss);
			if (ss.size() > 1) return false;
			split(s, "+", ss);
			if (ss.size() > 1) return false;
		}

		return true;
	}

	bool isNumberNoE(string s) {
		vector<string> ss;
		split(s, ".", ss);
		if (ss.size() > 2) return false;
		if (ss.size() == 2) {
			if (!prefixCheck(ss[0])) return false;

			if (ss[0].empty() && ss[1].empty()) return false;

			if (!onlyNumber(ss[1], true)) return false;
			return onlyNumber(ss[0], true);
		}

		if (!prefixCheck(ss[0])) return false;
		return onlyNumber(ss[0]);
	}

	bool isNumber(string s) {
		trim(s);
		if (s.empty()) return false;

		vector<string> ss;
		split(s, " ", ss);

		if (ss.size() != 1) return false;

		split(s, "e", ss);
		if (ss.size() > 2) return false;
		if (ss.size() == 2) {
			if (ss[1].find('.') != string::npos) return false;

			if (!isNumberNoE(ss[1])) return false;
		}

		return isNumberNoE(ss[0]);
	}
};

