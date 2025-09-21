/*
* @lc app=leetcode id=3689 lang=cpp
* [3689] Maximum Total Subarray Value I
* https://leetcode.com/problems/maximum-total-subarray-value-i
* Sat Sep 20 2025, 23:47:13 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        return 1LL * k * (*max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end()));
    }
};
// @lc code=end
