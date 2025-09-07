/*
* Fun Permutation
* https://codeforces.com/contest/2137/problem/B
* Sun Sep 07 2025, 12:38:11 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    for (int i = n; i && cin >> x; i--)
        cout << n - x + 1 << ' ';
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
