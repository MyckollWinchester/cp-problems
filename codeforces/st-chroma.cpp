/*
* St. Chroma
* https://codeforces.com/problemset/problem/2106/B
* Mon May 26 2025, 01:18:24 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < x; ++i) {
        cout << i << ' ';
    }
    for (int i = n - 1; i >= x; --i) {
        cout << i << ' ';
    }
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
