/*
* Beautiful Average
* https://codeforces.com/contest/2162/problem/A
* Wed Oct 22 2025, 02:16:05 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    int mx = 0;
    while (n-- && cin >> x)
        mx = max(mx, x);
    cout << mx << '\n';
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
