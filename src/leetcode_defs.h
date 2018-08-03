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

///////////////////////////////////////////////////////////////////////////////
/// function 
void trimLeftTrailingSpaces(string &input);
void trimRightTrailingSpaces(string &input);
vector<int> stringToIntegerVector(string input);
ListNode* stringToListNode(string input);
string listNodeToString(ListNode* node);