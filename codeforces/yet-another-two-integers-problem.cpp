/*
* Yet Another Two Integers Problem
* https://codeforces.com/problemset/problem/1409/A
* Mon Sep 01 2025, 00:56:46 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << abs(b - a)/10 + (abs(b - a) % 10 != 0) << '\n';
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
