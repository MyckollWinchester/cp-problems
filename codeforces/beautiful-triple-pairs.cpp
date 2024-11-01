/*
* Beautiful Triple Pairs
* https://codeforces.com/problemset/problem/1974/C
* Tue Oct 29 2024, 13:48:12 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

#define nil -1
typedef long long ll;
typedef tuple<int, int, int> triple;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &i : a)
        cin >> i;
    ll ans = 0;
    map<triple, ll> m;
    for (int i = 0; i < n - 2; ++i) {
        triple t = {a[i], a[i+1], a[i+2]};
        triple t1 = {nil, a[i+1], a[i+2]};
        triple t2 = {a[i], nil, a[i+2]};
        triple t3 = {a[i], a[i+1], nil};
        for (triple ti : {t1, t2, t3}) {
            ans += m[ti] - m[t];
            m[ti]++;
        }
        m[t]++;
    }
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
