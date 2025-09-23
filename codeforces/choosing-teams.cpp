/*
* Choosing Teams
* https://codeforces.com/problemset/problem/432/A
* Mon Sep 22 2025, 20:54:23 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    if (n < 3) {
        cout << "0\n";
        return;
    }

    vector<int> y(n);
    for (int i = 0; i < n; ++i)
        cin >> y[i];
    sort(y.begin(), y.end());

    int ans = 0;

    for (int i = 2; i < n; i += 3) {
        if (y[i] + k > 5) break;
        ans++;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
