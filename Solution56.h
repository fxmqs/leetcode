#pragma once

#include "leetcode_defs.h"

class Solution56
{
public:
	Solution56();
	~Solution56();

	vector<Interval> merge(vector<Interval>& intervals) {
		vector<Interval> res;
		if (intervals.empty()) return res;
		sort(intervals.begin(), intervals.end(), [](const Interval&l, const Interval &r) {
			if (l.start == r.start) return l.end < r.end;
			return l.start < r.start;
		});

		for (auto x : intervals) {
			if (res.empty()) {
				res.push_back(x);
				continue;
			}
			auto &k = res[res.size() - 1];
			if (x.start > k.end) {
				res.push_back(x);
			}
			else {
				k.end = max(k.end, x.end);
			}
		}

		return res;
	}
};

