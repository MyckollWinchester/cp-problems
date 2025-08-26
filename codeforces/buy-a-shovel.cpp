/*
* Buy a Shovel
* https://codeforces.com/contest/732/problem/A
* Tue Aug 26 2025, 23:00:08 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, r;
    cin >> k >> r;
    int ans = 1;
    for (; ans < 10; ++ans) 
        if ((k*ans % 10 == r) || (k*ans % 10) == 0) break;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
