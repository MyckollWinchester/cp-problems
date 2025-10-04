/*
* Love Story
* https://codeforces.com/problemset/problem/1829/A
* Fri Oct 03 2025, 23:41:51 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t = "codeforces";
    cin >> s;

    int ans = 0;
    for (int i = 0; i < 10; ++i)
        if (s[i] != t[i]) ans++;
    
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
