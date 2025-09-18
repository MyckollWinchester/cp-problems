/*
* Odd One Out
* https://codeforces.com/problemset/problem/1915/A
* Thu Sep 18 2025, 13:48:00 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == b ? c : (a == c ? b : a)) << '\n';
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
