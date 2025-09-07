/*
* AtCoder AAC Contest
* https://atcoder.jp/contests/abc422/tasks/abc422_c
* Sun Sep 07 2025, 02:49:02 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long ans = min(a, min(c, (a + b + c) / 3));
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
