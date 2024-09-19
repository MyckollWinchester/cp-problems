/*
* Angry Monk
* https://codeforces.com/contest/1992/problem/B
* Wed Sep 18 2024, 23:32:56 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int ans = 0, max = 0;
    while (k--) {
        int a;
        cin >> a;
        ans += 2*a - 1;
        if (a > max)
            max = a;
    }
    cout << ans - 2*max + 1 << "\n";
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
