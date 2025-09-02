/*
* I Will Definitely Make It
* https://codeforces.com/contest/2126/problem/C
* Mon Sep 01 2025, 19:44:05 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<ll> ht(n);
    for (int i = 0; i < n; ++i)
        cin >> ht[i];
    k = ht[k-1];

    vector<ll> h;
    for (ll h_i : ht)
        if (h_i >= k)
            h.push_back(h_i);

    sort(h.begin(), h.end());
    h.erase(unique(h.begin(), h.end()), h.end());

    ll prev = 0;
    for (int i = 0; i < h.size() - 1; ++i) {
        if (h[i] < prev + h[i+1] - h[i]) {
            cout << "NO\n";
            return;
        }
        h[i] = prev + h[i+1] - h[i];
        prev = h[i];
    }
    
    cout << "YES\n";
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
