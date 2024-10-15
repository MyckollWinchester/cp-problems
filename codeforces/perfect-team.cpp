/*
* Perfect Team
* https://codeforces.com/contest/1221/problem/C
* Mon Oct 14 2024, 23:42:21 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q, c, m, x;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> c >> m >> x;
        cout << min(c, min(m, (c+m+x)/3)) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
