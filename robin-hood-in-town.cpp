/*
* Robin Hood in Town
* https://codeforces.com/contest/2014/problem/C
* Sat Sep 21 2024, 14:16:13 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;

    if (n < 3) {
        for (int i = 0; i < n; ++i) {
            ll a;
            cin >> a;
        }
        cout << "-1\n";
        return;
    }

    long long wealth = 0;
    ll mins = n/2 + 1;

    multiset<ll> ms;

    ll _max = 0;

    for (int i = 0; i < n; ++i) {
        ll a;
        cin >> a;
        wealth += a;
        if (ms.size() == mins) {
            if (a < *ms.rbegin()) {
                ms.erase(--ms.end());
                ms.insert(a);
            }
        } else {
            ms.insert(a);
        }
        if (a > _max) {
            _max = a;
        }
    }

    ll target = *ms.rbegin() * n * 2;

    cout << max(0ll, target  - wealth + 1) << "\n";
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
