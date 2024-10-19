/*
* Candy Button
* https://atcoder.jp/contests/abc376/tasks/abc376_a
* Sat Oct 19 2024, 09:06:14 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c, tprev, t;
    cin >> n >> c >> tprev;
    int ans = 0;
    while (--n) {
        cin >> t;
        if (t - tprev >= c) {
            ans++;
            tprev = t;
        }
    }
    cout << ans + 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
