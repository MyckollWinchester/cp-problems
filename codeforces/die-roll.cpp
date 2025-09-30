/*
* Die Roll
* https://codeforces.com/problemset/problem/9/A
* Tue Sep 30 2025, 02:53:37 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int p = 7 - max(a, b);
    cout << p/gcd(p, 6) << '/' << 6/gcd(p, 6) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
