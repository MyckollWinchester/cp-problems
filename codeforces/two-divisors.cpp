/*
* Two Divisors
* https://codeforces.com/problemset/problem/1916/B
* Sat Sep 06 2025, 01:30:10 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll a, b;
    cin >> a >> b;
    if (b % a == 0)
        cout << b * b / a;
    else
        cout << b * a / gcd(a, b);
    cout << '\n';
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
