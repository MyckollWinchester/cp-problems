/*
* Puzzles
* https://codeforces.com/contest/337/problem/A
* Thu Oct 17 2024, 18:35:37 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> p(m);
    for (int i = 0; i < m; ++i)
        cin >> p[i];
    sort(p.begin(), p.end());
    int _min = 1000;
    for (int i = 0; i + n - 1 < m; ++i)
        _min = min(_min, p[i+n-1] - p[i]);
    cout << _min << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
