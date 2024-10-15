/*
* @lc app=leetcode id=3318 lang=cpp
* [3318] Find X-Sum of All K-Long Subarrays I
* https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i
* Sun Oct 13 2024, 00:16:28 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        map<int, int> occurrences;
        vector<int> ans;
        for (int i = 0; i < nums.size() - k + 1; ++i) {
            for (int j = i; j < k + i; ++j)
                occurrences[nums[j]]++;
            vector<pair<int,int>> vec(occurrences.begin(), occurrences.end());
            transform(vec.begin(), vec.end(), vec.begin(), [] (pair<int,int> p) { return (pair<int,int>) {p.second, p.first}; });
            sort(vec.begin(), vec.end(), greater<pair<int,int>>());
            int sum = 0;
            for (int i = 0; i < min(x, (int) vec.size()); ++i)
                sum += vec[i].first * vec[i].second;
            ans.push_back(sum);
            occurrences.clear();
        }
        return ans;
    }
};
// @lc code=end
