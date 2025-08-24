/*
* Redstone?
* https://codeforces.com/problemset/problem/2133/A
* Sun Aug 24 2025, 10:50:29 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    // all middle gears cancel out
    // hence, if there is a duplicate the answer should be yes @_@?
    set<int> s(a.begin(), a.end());
    cout << (a.size() > s.size() ? "YES" : "NO") << '\n';
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
