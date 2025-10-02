/*
* Sigma Cubes
* https://atcoder.jp/contests/abc425/tasks/abc425_a
* Sat Sep 27 2025, 09:02:49 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans += pow(-1, i) * pow(i, 3);

    cout << (int) ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
