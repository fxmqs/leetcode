//============================================================================
// Name        : leetcode.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>
using namespace std;

template <class T>
void out(const T&t) {
    for (auto x : t) {
        cout << x << ' ';
    }

    cout << endl;
}

class twoSum_1 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> index;
        for (int i = 0; i < nums.size(); ++i)
            index[nums[i]] = i;

        for (int i = 0; i < nums.size(); ++i) {
            auto res = index.find(target - nums[i]);
            if (res != index.end() && i != res->second)
                return {i, res->second};
        }
        return {0, 0};
    }
};

int main(int argc, char **argv) {
	twoSum_1 x;
    vector<int> in({3,2,4,1});
    out(x.twoSum(in, 6));

	testing::InitGoogleTest(&argc, argv);

	RUN_ALL_TESTS();

	system("pause");

	return 0;
}
