/*
* Dislike of Threes
* https://codeforces.com/problemset/problem/1560/A
* Sun Sep 21 2025, 03:30:28 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> nums;

void precompute() {
    for (int i = 1; nums.size() < 1000; ++i) {
        if (i % 3 == 0 || i % 10 == 3)
            continue;
        nums.push_back(i);
    }
}

void solve() {
    int k;
    cin >> k;
    cout << nums[k-1] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    precompute();
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
