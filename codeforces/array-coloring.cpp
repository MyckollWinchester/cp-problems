/*
* Array Coloring
* https://codeforces.com/problemset/problem/1857/A
* Tue Sep 30 2025, 02:59:28 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a;
    cin >> n;
    int sum = 0;
    while (n-- && cin >> a) sum += a;
    cout << (sum % 2 == 0 ? "YES" : "NO") << '\n';
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
