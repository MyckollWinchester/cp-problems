/*
* K-th Not Divisible by n
* https://codeforces.com/problemset/problem/1352/C
* Mon Sep 29 2025, 07:10:33 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    
    if (n > k) {
        cout << k << '\n';
        return;
    }

    cout << k + (k - 1) / (n - 1) << '\n';
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
