/*
* Having Been a Treasurer in the Past, I Help Goblins Deceive
* https://codeforces.com/problemset/problem/2072/B
* Wed Sep 10 2025, 01:17:05 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s >> s;
    long long hyp = count(s.begin(), s.end(), '-');
    long long und = s.length() - hyp;
    cout << hyp/2 * (hyp/2 + hyp%2) * und << '\n';
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
