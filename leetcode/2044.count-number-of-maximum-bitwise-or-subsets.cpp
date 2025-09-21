/*
* @lc app=leetcode id=2044 lang=cpp
* [2044] Count Number of Maximum Bitwise-OR Subsets
* https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets
* Fri Oct 18 2024, 20:35:24 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int target, ans = 0;
    void dfs(vector<int> &nums, int i, int current) {
        if (i == nums.size()) {
            ans += target == current ? 1 : 0;
            return;
        }
        dfs(nums, i+1, current);
        dfs(nums, i+1, current |= nums[i]);
    }
    int countMaxOrSubsets(vector<int> &nums) {
        target = reduce(nums.begin(), nums.end(), 0, bit_or<>());
        dfs(nums, 0, 0);
        return ans;
    }
};
// @lc code=end
