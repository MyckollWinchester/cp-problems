/*
* Be Positive
* https://codeforces.com/contest/2149/problem/A
* Tue Sep 30 2025, 03:10:43 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a;
    cin >> n;
    int ans = 0, cnt = 0;
    while (n-- && cin >> a) {
        if (a == -1) cnt++;
        else if (a == 0) ans++;
    }
    ans += 2 * (cnt%2);
    cout << ans << '\n';
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
