/*
* @lc app=leetcode id=1405 lang=cpp
* [1405] Longest Happy String
* https://leetcode.com/problems/longest-happy-string
* Tue Oct 15 2024, 22:02:31 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> pq;
        pq.push({a, 'a'});
        pq.push({b, 'b'});
        pq.push({c, 'c'});
        int rep;
        char prev = 'd';
        pair<int, char> wait;
        string ans = "";
        while (pq.top().first > 0) {
            if (prev != pq.top().second)
                rep = 1;
            if (rep < 3) {
                ans += pq.top().second;
                pq.push({pq.top().first-1, pq.top().second});
                prev = pq.top().second;
                pq.pop();
                rep++;
            } else {
                wait = pq.top();
                pq.pop();
                if (pq.empty() || pq.top().first == 0)
                    break;
                ans += pq.top().second;
                pq.push({pq.top().first-1, pq.top().second});
                prev = pq.top().second;
                pq.pop();
                pq.push(wait);
            }
        }
        return ans;
    }
};
// @lc code=end
