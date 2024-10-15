/*
* Divisibility Problem
* https://codeforces.com/problemset/problem/1328/A
* Sun Sep 15 2024, 23:54:52 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    
    if (b >= a) {
        cout << b - a << "\n";
    } else if (a % b) {
        cout << b * (a/b+1) - a << "\n";
    } else {
        cout << 0 << "\n";
    }
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
