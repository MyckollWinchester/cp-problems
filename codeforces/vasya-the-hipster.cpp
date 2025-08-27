/*
* Vasya the Hipster
* https://codeforces.com/problemset/problem/581/A
* Tue Aug 26 2025, 23:51:22 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << ' ' << (max(a, b) - min(a, b))/2 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
