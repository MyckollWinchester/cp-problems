/*
* Only One Digit
* https://codeforces.com/contest/2126/problem/A
* Mon Sep 01 2025, 20:39:44 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x;
    cin >> x;
    sort(x.begin(), x.end());
    cout << x[0] << '\n';
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
