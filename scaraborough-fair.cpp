/*
* Scarborough Fair
* https://codeforces.com/contest/897/problem/A
* Mon Oct 07 2024, 23:41:59 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, l, r;
    string s;
    char c1, c2;
    cin >> n >> m >> s;
    for (int i = 0; i < m; ++i) {
        cin >> l >> r >> c1 >> c2;
        transform(s.begin()+l-1, s.begin()+r, s.begin()+l-1, [c1, c2] (char c) { return c == c1 ? c2 : c; });
    }
    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        solve();
    return 0;
}
