/*
* Zhan's Blender
* https://codeforces.com/contest/2013/problem/A
* Fri Sep 20 2024, 11:40:16 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    double n, x, y;
    cin >> n >> x >> y;
    int ans = ceil(n/min(x,y));
    cout << ans << "\n";
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
