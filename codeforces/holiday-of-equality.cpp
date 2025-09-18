/*
* Holiday of Equality
* https://codeforces.com/problemset/problem/758/A
* Thu Sep 18 2025, 13:54:55 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int mx = *max_element(a.begin(), a.end());
    int ans = 0;
    for (int &a_i : a)
        ans += mx - a_i;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
