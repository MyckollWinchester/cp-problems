/*
* Collatz Conjecture
* https://codeforces.com/contest/2137/problem/A
* Sun Sep 07 2025, 11:50:07 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k, x;
    cin >> k >> x;
    while (k--)
        x *= 2;
    cout << x << '\n';
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
