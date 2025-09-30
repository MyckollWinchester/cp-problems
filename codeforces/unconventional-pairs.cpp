/*
* Unconventional Pairs
* https://codeforces.com/contest/2149/problem/B
* Tue Sep 30 2025, 03:17:44 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; i += 2)
        ans = max(ans, a[i+1] - a[i]);
    
    cout << ans << '\n';
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
