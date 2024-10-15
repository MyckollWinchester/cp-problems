/*
* Gorilla and Permutation
* https://codeforces.com/contest/1992/problem/C
* Thu Sep 19 2024, 00:01:05 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v;
    for (int i = n; i > m; --i)
        cout << i << " ";
    for (int i = 1; i <= m; ++i)
        cout << i << " \n"[i==m];
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
