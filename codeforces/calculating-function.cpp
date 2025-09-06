/*
* Calculating Function
* https://codeforces.com/problemset/problem/486/A
* Tue Sep 02 2025, 13:48:32 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    cout << (n % 2 ? "-" : "") << n / 2 + n % 2 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
