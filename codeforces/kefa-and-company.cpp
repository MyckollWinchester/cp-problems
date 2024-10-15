/*
* Kefa and Company
* https://codeforces.com/contest/580/problem/B
* Tue Oct 15 2024, 14:23:58 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, d, m, s;
    cin >> n >> d;
    vector<pair<int,ll>> v;
    v.emplace_back(0, 0);
    for (int i = 0; i < n; ++i) {
        cin >> m >> s;
        v.emplace_back(m, s);
    }
    sort(all(v));
    ll cum, _max;
    cum = _max = 0;
    for (auto &[a, b] : v) {
        b += cum;
        cum = b;
    }
    for (int i = 1; i <= n; ++i) {
        auto it = upper_bound(v.begin() + i, v.end(), make_pair(v[i].first + d, 0ll));
        int j = it - v.begin();
        j--;
        _max = max(_max, v[j].second - v[i-1].second);
    }
    cout << _max << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
