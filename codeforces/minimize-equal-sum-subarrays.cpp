/*
* Minimize Equal Sum Subarrays
* https://codeforces.com/contest/1998/problem/B
* Mon Sep 23 2024, 01:29:52 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, first, p;
    cin >> n >> first;
    while (--n) {
        cin >> p;
        cout << p << ' ';
    }
    cout << first << '\n';
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
