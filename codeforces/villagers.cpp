/*
* Villagers
* https://codeforces.com/problemset/problem/2133/B
* Sun Aug 24 2025, 11:37:49 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> g(n);
    for (int i = 0; i < n; ++i) cin >> g[i];
    sort(g.begin(), g.end(), greater<int>());
    ll ans = 0;
    for (int i = 0; i < n; i += 2) ans += g[i];
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
