/*
* Chocolate Bar Count
* https://atcoder.jp/contests/abc484/tasks/abc484_a
* Sat Nov 14 2026, 09:02:33 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int b, r;
    cin >> b >> r;
    cout << (30 - b) * (30 - r) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
