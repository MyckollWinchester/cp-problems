/*
* GCD Problem
* https://codeforces.com/problemset/problem/1617/B
* Sat Sep 06 2025, 02:07:19 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a = 2, b = n - 3;
    for (; a + b + 1 != n || gcd(a, b) != 1; ++a, --b);
    cout << a << ' ' << b << ' ' << 1 << '\n'; 
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
