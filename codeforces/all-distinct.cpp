/*
* All Distinct
* https://codeforces.com/problemset/problem/1692/B
* Tue Oct 29 2024, 13:16:29 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, x;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        m[x]++;
    }
    int ans = 0, evens = 0;
    for (auto &[k, v] : m) {
        ans++;
        if (v%2 == 0)
            evens++;
    }
    cout << ans - evens%2 << '\n';
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
