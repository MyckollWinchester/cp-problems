/*
* Draw a Square
* https://codeforces.com/problemset/problem/2074/A
* Mon Apr 21 2025, 22:45:21 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, d, r, u;
    cin >> l >> d >> r >> u;
    cout << (l == r && r == d && d == u ? "YES" : "NO") << '\n';
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
