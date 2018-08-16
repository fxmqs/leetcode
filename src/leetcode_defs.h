#pragma once

#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

using namespace std;

///////////////////////////////////////////////////////////////////////////////
/// struct 
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}

	bool operator == (const Interval &rhs) const {
		return start == rhs.start && end == rhs.end;
	}
};

///////////////////////////////////////////////////////////////////////////////
/// function 
void trimLeftTrailingSpaces(string &input);
void trimRightTrailingSpaces(string &input);
vector<int> stringToIntegerVector(string input);
ListNode* stringToListNode(string input);
string listNodeToString(ListNode* node);