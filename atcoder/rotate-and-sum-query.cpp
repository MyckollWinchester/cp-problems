/*
* Rotate and Sum Query
* https://atcoder.jp/contests/abc425/tasks/abc425_c
* Sat Sep 27 2025, 10:39:21 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<ll> cumsum = a;
    partial_sum(cumsum.begin(), cumsum.end(), cumsum.begin());

    // points to the start of the ring array
    int start = 0;

    while (q--) {
        int format;
        cin >> format;
        if (format == 1) {
            int c;
            cin >> c;
            start = (start + c) % n;
        } else {
            int l, r;
            cin >> l >> r;

            int left = (start + l - 1) % n;
            int right = (start + r - 1) % n;

            ll ans = 0;
            if (left <= right)
                ans = cumsum[right] - (left ? cumsum[left - 1] : 0);
            else
                ans = (cumsum[n - 1] - (left ? cumsum[left - 1] : 0)) + cumsum[right];

            cout << ans << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
