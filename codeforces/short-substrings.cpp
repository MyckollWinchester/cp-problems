/*
* Short Substrings
* https://codeforces.com/problemset/problem/1367/A
* Fri Oct 03 2025, 00:25:34 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.length();

    cout << s.substr(0, 2);
    for (int i = 3; i < n; i += 2)
        cout << s[i];

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
