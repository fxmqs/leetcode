#pragma once
#include "leetcode_defs.h"

class Solution_8
{
public:
	Solution_8();
	~Solution_8();

	int myAtoi(string str) {
		long long res = 0;
		bool flag = false;
		bool started = false;

		for (auto c : str) {
			if (c == ' ' && !started) continue;
			if (c == '-' && !started) {
				flag = true;
				started = true;
				continue;
			}
			if (c == '+' && !started) {
				flag = false;
				started = true;
				continue;
			}

			if (c >= '0' && c <= '9') {
				res = flag ? (res * 10) - c + '0' : (res * 10) + c - '0';
				started = true;
			}
			else {
				break;
			}

			if (res > 0x7fffffff) {
				return 0x7fffffff;
			}
			if (res <= (int)(0x80000000)) {
				return (int)(0x80000000);
			}
		}

		return res;
	}

};

