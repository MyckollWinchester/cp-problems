/*
* What month is it?
* https://atcoder.jp/contests/abc420/tasks/abc420_d
* Sun Aug 24 2025, 09:03:41 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    int res = (x + y) % 12;
    if (res == 0) res = 12;
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
