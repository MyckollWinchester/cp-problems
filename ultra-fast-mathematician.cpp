/*
* Ultra-Fast Mathematician
* https://codeforces.com/problemset/problem/61/A
* Thu Sep 12 2024, 23:54:27 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s1, s2, s = "";
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] == s2[i]) s += '0';
        else s += '1';
    }
    cout << s << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
