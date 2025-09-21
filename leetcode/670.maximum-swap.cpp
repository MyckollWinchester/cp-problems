/*
* @lc app=leetcode id=670 lang=cpp
* [670] Maximum Swap
* https://leetcode.com/problems/maximum-swap
* Wed Oct 16 2024, 22:00:09 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int maximumSwap(int num) {
        string s1 = to_string(num);
        string s2 = s1;
        sort(s2.begin(), s2.end(), greater<int>());
        if (s1 == s2)
            return num;
        int i = 0;
        while (s1[i] == s2[i])
            ++i;
        auto it = find(s1.rbegin(), s1.rend() - i - 2, s2[i]);
        swap(s1[i], *it);
        return stoi(s1);
    }
};
// @lc code=end
