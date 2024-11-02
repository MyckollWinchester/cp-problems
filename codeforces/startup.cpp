/*
* Startup
* https://codeforces.com/problemset/problem/2036/B
* Sat Nov 02 2024, 11:56:31 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(k+1);
    for (ll i = 0; i < k; ++i) {
        ll bi, ci;
        cin >> bi >> ci;
        v[bi] += ci;
    }
    sort(v.begin(), v.end(), greater<ll>());
    ll ans = 0;
    for (ll i = 0; i < n && i < k; ++i)
        ans += v[i];
    cout << ans << '\n';
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
