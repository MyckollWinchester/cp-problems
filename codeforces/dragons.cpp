/*
* Dragons
* https://codeforces.com/contest/230/problem/A
* Sun Oct 20 2024, 19:51:12 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int s, n, x, y;
    cin >> s >> n;
    vector<pair<int,int>> dragons(n);
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        dragons[i] = {x, y};
    }
    sort(dragons.begin(), dragons.end());
    for (int i = 0; i < n; ++i) {
        if (s <= dragons[i].first) {
            cout << "NO\n";
            return;
        }
        s += dragons[i].second;
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
