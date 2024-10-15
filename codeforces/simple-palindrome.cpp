/*
* Simple Palindrome
* https://codeforces.com/contest/2005/problem/A
* Thu Sep 19 2024, 02:47:46 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string ans = "";
    for (int i = 0; i < n; ++i)
        ans += "aeiou"[i%5];
    sort(ans.begin(), ans.end());
    cout << ans << "\n";
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
