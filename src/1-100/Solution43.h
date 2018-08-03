#pragma once

#include "leetcode_defs.h"

class Solution43
{
public:
	Solution43();
	~Solution43();

	string add(string a, string b) {

		int n(a.size());
		int m(b.size());
		int mark = 0;
		string res;
		while (n > 0 && m > 0) {
			--n;
			--m;
			char c = a.at(n) + b.at(m) + mark - '0';
			if (c > '9') {
				c -= 10;
				mark = 1;
			}
			else {
				mark = 0;
			}
			res += c;
		}

		while (n-- > 0) {
			char c = a.at(n) + mark;
			if (c > '9') {
				c -= 10;
				mark = 1;
			}
			else {
				mark = 0;
			}
			res += c;
		}

		while (m-- > 0) {
			char c = b.at(m) + mark;
			if (c > '9') {
				c -= 10;
				mark = 1;
			}
			else {
				mark = 0;
			}
			res += c;
		}

		if (mark) res += '1';
		reverse(res.begin(), res.end());
		return res;
	}

	string mul(string a, int b, int size) {
		if (b == 0 || a == "0") {
			return "0";
		}
		string res;
		while (--size) res += '0';

		int n(a.size());
		int mark = 0;
		while (n-- > 0) {
			int x = a[n] - '0';
			x *= b;
			x += mark;
			mark = x / 10;
			x %= 10;
			res += (x + '0');
		}

		if (mark) res += (mark + '0');
		reverse(res.begin(), res.end());
		return res;
	}

	string multiply(string num1, string num2) {
		string res("0");

		for (int i = 0; i < num2.size(); ++i) {
			int x = num2.at(i) - '0';
			if (x == 0) continue;
			res = add(res, mul(num1, x, num2.size() - i));
		}

		return res;
	}
};

