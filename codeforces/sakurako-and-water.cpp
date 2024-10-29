/*
* Sakurako and Water
* https://codeforces.com/problemset/problem/2033/B
* Tue Oct 29 2024, 00:38:29 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector(n, 0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];
    int ans = 0;
    for (int lr = 0; lr < n; ++lr) {
        int i = lr, j = 0;
        int mn = 0;
        while (i < n && j < n)
            mn = min(mn, matrix[i++][j++]);
        ans -= mn;
    }
    for (int sc = 1; sc < n; ++sc) {
        int i = 0, j = sc;
        int mn = 0;
        while (i < n && j < n)
            mn = min(mn, matrix[i++][j++]);
        ans -= mn;
    }
    cout << ans << '\n';
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
