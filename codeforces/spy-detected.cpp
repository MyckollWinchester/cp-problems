/*
* Spy Detected!
* https://codeforces.com/problemset/problem/1512/A
* Mon Sep 01 2025, 01:27:12 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    if (a[0] != a[1] && a[0] != a[2]) {
        cout << "1\n";
        return;
    }
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[0]) {
            cout << i + 1 << '\n';
            return;
        }
    }
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
