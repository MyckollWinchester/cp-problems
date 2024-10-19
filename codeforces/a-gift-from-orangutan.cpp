/*
* A Gift From Orangutan
* https://codeforces.com/contest/2030/problem/A
* Sat Oct 19 2024, 11:15:43 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ai;
    cin >> n;
    int mn = 1000, mx = 1;
    for (int i = 0; i < n; ++i) {
        cin >> ai;
        mn = min(mn, ai);
        mx = max(mx, ai);
    }
    cout << (mx - mn) * (n - 1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
