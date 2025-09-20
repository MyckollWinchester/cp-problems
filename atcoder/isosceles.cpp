/*
* Isosceles
* https://atcoder.jp/contests/abc424/tasks/abc424_a
* Sat Sep 20 2025, 09:03:18 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a == b) || (a == c) || (b == c) ? "Yes" : "No") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
