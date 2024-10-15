/*
* To My Critics
* https://codeforces.com/problemset/problem/1850/A
* Tue Sep 10 2024, 12:32:26 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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
