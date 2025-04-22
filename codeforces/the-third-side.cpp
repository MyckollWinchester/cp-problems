/*
* The Third Side
* https://codeforces.com/problemset/problem/2074/B
* Mon Apr 21 2025, 22:55:56 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, sum = 0;
    cin >> n;
    while (n-- && cin >> a)
        sum += a - 1;
    cout << sum + 1 << '\n';
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
