/*
* Even Odds
* https://codeforces.com/problemset/problem/318/A
* Tue Sep 24 2024, 22:21:39 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, k, ans;
    cin >> n >> k;
    ll k2 = n/2 + n%2;
    cout << (k-1 < k2 ? k*2 - 1 : 2*(k - k2)) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
