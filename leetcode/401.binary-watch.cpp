/*
* @lc app=leetcode id=401 lang=cpp
* [401] Binary Watch
* https://leetcode.com/problems/binary-watch
* Sat Oct 19 2024, 00:18:05 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> v;
        if (turnedOn > 8)
            return {};
        for (int i = 0; i < 12; ++i) {
            int h = popcount((unsigned) i);
            if (h > turnedOn)
                continue;
            for (int j = 0; j < 60; ++j) {
                int m = popcount((unsigned) j);
                if (h + m != turnedOn)
                    continue;
                v.push_back(to_string(i) + ':' + (j < 10 ? "0" : "") + to_string(j));
            }
        }
        return v;
    }
};
// @lc code=end
