/*
* @lc app=leetcode id=2938 lang=cpp
* [2938] Separate Black and White Balls
* https://leetcode.com/problems/separate-black-and-white-balls
* Tue Oct 15 2024, 02:00:19 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    long long minimumSteps(string s) {
        long long steps = 0;
        int j, i = 0;
        while (s[i] == '0')
            ++i;
        j = i;
        while (i < s.length()) {
            if (s[i] == '0') {
                steps += i - j;
                ++j;
            }
            ++i;
        }
        return steps;
    }
};
// @lc code=end
