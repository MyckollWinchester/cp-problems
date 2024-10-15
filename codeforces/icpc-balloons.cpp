/*
* ICPC Balloons
* https://codeforces.com/contest/1703/problem/B
* Sun Oct 06 2024, 15:16:29 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s >> s;
    set<char> cs(s.begin(), s.end());
    cout << s.length() + cs.size() << '\n';
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
