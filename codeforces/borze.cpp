/*
* Borze
* https://codeforces.com/problemset/problem/32/B
* Mon Sep 01 2025, 01:19:18 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if (s.length() == 1) {
        cout << "0\n";
        return;
    }
    s += "XX";
    string ans = "";
    for (int i = 0; i < s.length(); ++i) {
        if (s.substr(i, 2) == ".-" || s.substr(i, 2) == ".X") {
            ans += '0';
            continue;
        }
        else if (s.substr(i, 2) == "..")
            ans += "00";
        else if (s.substr(i, 2) == "-.")
            ans += '1';
        else if (s.substr(i, 2) == "--")
            ans += '2';
        ++i;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
