/*
* Prefiquence
* https://codeforces.com/contest/1968/problem/B
* Tue Oct 08 2024, 00:14:52 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, count;
    string a, b;
    cin >> n >> m >> a >> b;
    int ans = 0;
    for (int i = 0; i < m && ans < n; ++i)
        if (b[i] == a[ans])
            ans++;
    cout << ans << '\n';
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
