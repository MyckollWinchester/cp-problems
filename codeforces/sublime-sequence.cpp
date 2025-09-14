/*
* Sublime Sequence
* https://codeforces.com/contest/2148/problem/A
* Sat Sep 13 2025, 23:54:32 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, n;
    cin >> x >> n;
    cout << (n%2 ? x : 0) << '\n';
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
