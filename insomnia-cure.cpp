/*
* Insomnia cure
* https://codeforces.com/problemset/problem/148/A
* Thu Sep 26 2024, 11:06:06 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int ans = 0;
    for (int i = 1; i <= d; ++i)
        if (!(i%k) || !(i%l) || !(i%m) || !(i%n))
            ans++;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
