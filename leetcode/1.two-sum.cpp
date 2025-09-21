/*
* @lc app=leetcode id=1 lang=cpp
* [1] Two Sum
* https://leetcode.com/problems/two-sum
* Sun Oct 13 2024, 15:00:31 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n; ++i)
            v[i] = {nums[i], i};
        sort(v.begin(), v.end());
        int i = 0, j = n - 1;
        while (v[i].first + v[j].first != target) {
            while (v[i].first + v[j].first > target)
                j--;
            while (v[i].first + v[j].first < target)
                i++;
        }
        return {v[i].second, v[j].second};
    }
};
// @lc code=end
