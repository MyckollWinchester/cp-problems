/*
* Pens and Pencils
* https://codeforces.com/contest/1244/problem/A
* Mon Oct 07 2024, 23:52:21 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int x, y;
    x = a / c + (a%c>0);
    y = b / d + (b%d>0);
    if (x + y <= k)
        cout << x << ' ' << y << '\n';
    else
        cout << -1 << '\n';
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
