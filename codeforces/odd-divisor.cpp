/*
* Odd Divisor
* https://codeforces.com/problemset/problem/1475/A
* Sat Aug 30 2025, 19:15:14 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll pow2 = 2;
    while (pow2 < n)
        pow2 *= 2ll;
    cout << (pow2 == n ? "NO" : "YES") << '\n';
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
