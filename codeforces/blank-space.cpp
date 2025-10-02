/*
* Blank Space
* https://codeforces.com/problemset/problem/1829/B
* Thu Oct 02 2025, 00:19:14 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a;
    cin >> n;
    int ans = 0, count = 0;
    while (n-- && cin >> a) {
        if (a == 0)
            ans = max(ans, ++count);
        else
            count = 0;
    }
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
