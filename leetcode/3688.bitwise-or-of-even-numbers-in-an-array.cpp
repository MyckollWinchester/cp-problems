/*
* @lc app=leetcode id=3688 lang=cpp
* [3688] Bitwise OR of Even Numbers in an Array
* https://leetcode.com/problems/bitwise-or-of-even-numbers-in-an-array
* Sat Sep 20 2025, 23:40:58 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        vector<int> evens;
        for (int num : nums)
            if (num % 2 == 0)
                evens.push_back(num);
        if (evens.empty())
            return 0;
        return accumulate(evens.begin() + 1, evens.end(), evens[0], [](int a, int b) { 
            return a | b; 
        });
    }
};
// @lc code=end
