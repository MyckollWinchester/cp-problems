/*
* Plus or Minus
* https://codeforces.com/problemset/problem/1807/A
* Sat Aug 30 2025, 01:30:06 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b == c ? '+' : '-') << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
