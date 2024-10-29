/*
* Sakurako and Kosuke
* https://codeforces.com/problemset/problem/2033/A
* Tue Oct 29 2024, 00:38:23 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << (n%2 ? "Kosuke" : "Sakurako") << '\n';
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
