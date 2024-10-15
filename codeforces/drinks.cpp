/*
* Drinks
* https://codeforces.com/contest/200/problem/B
* Tue Sep 24 2024, 21:34:32 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    double ans = 0;
    double p;
    for (int i = 0; i < n; ++i) {
        cin >> p;
        ans += p;
    }
    cout << setprecision(14) << ans/n << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
