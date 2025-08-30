/*
* Cut Ribbon
* https://codeforces.com/problemset/problem/189/A
* Sat Aug 30 2025, 02:34:12 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    vector<int> lengths(3);
    cin >> n >> lengths[2] >> lengths[1] >> lengths[0];

    vector<int> dp(n+1);

    for (int len : lengths) {
        for (int i = 1; i < n + 1; ++i) {
            if (i-len >= 0 && (dp[i-len] != 0 || i-len == 0)) {
                dp[i] = max(dp[i], dp[i-len] + 1);
            }
        }
    }

    cout << dp[n] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
