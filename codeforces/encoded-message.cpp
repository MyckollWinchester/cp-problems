/*
* Encoded Message
* https://codeforces.com/group/pnCtQsyJuE/contest/549006/problem/B
* Tue Sep 10 2024, 13:52:37 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int len = sqrt(s.length());
    for (int i = len-1; i >= 0; --i)
        for (int j = 0; j < len; ++j)
            cout << s[i+len*j];
    cout << "\n";
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
