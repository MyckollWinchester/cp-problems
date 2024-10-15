/*
* @lc app=leetcode id=9 lang=cpp
* [9] Palindrome Number
* https://leetcode.com/problems/palindrome-number
* Sun Oct 13 2024, 19:23:46 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        for (int i = 0, j = s.length() - 1; i < j; ++i, --j)
            if (s[i] != s[j])
                return false;
        return true;
    }
};
// @lc code=end
