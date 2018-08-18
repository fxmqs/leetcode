#pragma once

#include "leetcode_defs.h"

class Solution68
{
public:
	Solution68();
	~Solution68();

	void insert(vector<string>& res, vector<string>& lines, int count, int maxWidth) {
		string tmp;
		int space = maxWidth - count;
		int remain = 0;
		int every = space;
		if (lines.size() != 1) {
			remain = space % (lines.size() - 1);
			every = space / (lines.size() - 1);
		}
		for (int i = 0; i < lines.size(); ++i) {
			tmp += lines[i];
			if (lines.size() == 1 || (i != lines.size() - 1))
				tmp += string(every + (i < remain), ' ');
		}
		res.push_back(tmp);
		lines.clear();
	}

	vector<string> fullJustify(vector<string>& words, int maxWidth) {
		if (words.empty()) return words;
		int count = 0;
		vector<string> res;
		vector<string> lines;
		for (int i = 0; i < words.size(); ++i) {
			if (count + lines.size() + words[i].size() > maxWidth) {
				insert(res, lines, count, maxWidth);
				count = 0;
			}

			lines.push_back(words[i]);
			count += words[i].size();

		}
		if (count != 0) {
			string tmp;
			for (int i = 0; i < lines.size(); ++i) {
				tmp += lines[i];
				if (i != lines.size() - 1)
					tmp += ' ';
				else 
					tmp += string(maxWidth - tmp.size(), ' ');
			}
			res.push_back(tmp);
		}
		return res;
	}
};

