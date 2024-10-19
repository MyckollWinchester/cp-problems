/*
* @lc app=leetcode id=1545 lang=cpp
* [1545] Find Kth Bit in Nth Binary String
* https://leetcode.com/problems/find-kth-bit-in-nth-binary-string
* Fri Oct 18 2024, 23:24:11 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    char findKthBit(int n, int k) {
        string prev = "0";
        for (int i = 1; i < n; ++i) {
            string revinv(prev.size(), 'A');
            transform(prev.rbegin(), prev.rend(), revinv.begin(), [] (char c) {
                if (c == '0')
                    return '1';
                return '0';
            });
            prev += '1' + revinv;
        }
        return prev[k-1];
    }
};
// @lc code=end
