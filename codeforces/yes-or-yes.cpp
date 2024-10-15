/*
* YES or YES?
* https://codeforces.com/contest/1703/problem/A
* Sun Oct 06 2024, 15:13:19 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), [] (char c) { return tolower(c); });
    cout << (s == "yes" ? "YES" : "NO") << '\n';
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
