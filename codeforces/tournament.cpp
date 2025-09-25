/*
* Tournament
* https://codeforces.com/problemset/problem/2123/B
* Thu Sep 25 2025, 01:11:31 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    
    if (k > 1) {
        cout << "YES\n";
        int ignore;
        while (n--) cin >> ignore;
        return;
    }
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int mx = *max_element(a.begin(), a.end());
    
    cout << (mx == a[j-1] ? "YES" : "NO") << '\n';
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
