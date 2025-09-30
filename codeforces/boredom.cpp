/*
* Boredom
* https://codeforces.com/problemset/problem/455/A
* Tue Sep 30 2025, 02:34:08 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    
    int max_ai = 10e5 + 2;

    vector<ll> nums(max_ai); // nums[0] = nums[10e5+1] = 0
    for (int i = 0; i < n; ++i) {
        int ai;
        cin >> ai;
        nums[ai] += ai;
    }

    ll ans = 0;
    int range_l = 0;
    vector<pair<int, int>> ranges;

    for (int i = 1; i < max_ai; ++i) {   
        if (nums[i] == 0) continue;
        
        // nums: {..., 0, N, 0, ...}, we can add N without losing any points
        if (nums[i-1] == 0 && nums[i+1] == 0) {
            ans += nums[i];
            nums[i] = 0;
            continue;
        }

        if (range_l == 0) range_l = i;

        if (nums[i+1] == 0) {
            ranges.push_back({range_l, i});
            range_l = 0;
        }
    }

    for (auto &[l, r] : ranges) {
        // house robber problem
        for (int i = l+2; i <= r; ++i)
            nums[i] += max(nums[i-2], nums[i-3]);
        ans += max(nums[r], nums[r-1]);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
