/*
* Sum of Min Query
* https://atcoder.jp/contests/abc420/tasks/abc420_c
* Sun Aug 24 2025, 09:36:01 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n), b(n);
    
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    ll mn = 0;
    for (int i = 0; i < n; ++i) mn += min(a[i], b[i]);

    while (q--) {
        char c;
        ll x, v;
        cin >> c >> x >> v;
        
        ll prev_min = min(a[x-1], b[x-1]);

        if (c == 'A') a[x-1] = v;
        else b[x-1] = v;

        ll new_min = min(a[x-1], b[x-1]);
        mn = mn - prev_min + new_min;
        
        cout << mn << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
