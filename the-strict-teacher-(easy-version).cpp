/*
* The Strict Teacher (Easy Version)
* https://codeforces.com/contest/2005/problem/B1
* Sat Sep 14 2024, 12:26:03 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    int a, b, d;
    cin >> a >> b >> d;
    if (a > d && b > d) {
        cout << min(a-1, b-1) << "\n";
    } else if (a < d && b < d) {
        cout << min(n-a, n-b) << "\n";
    } else {
        cout << abs(b-a)/2 << "\n";
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
