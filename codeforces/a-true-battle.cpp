/*
* A TRUE Battle
* https://codeforces.com/contest/2030/problem/C
* Sat Oct 19 2024, 12:06:53 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s >> s;
    cout << (s.find("11") != string::npos || s[0] == '1' || s.back() == '1' ? "YES" : "NO") << '\n';
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
