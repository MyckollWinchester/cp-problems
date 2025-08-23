/*
* Soft Drinking
* https://codeforces.com/problemset/problem/151/A
* Sat Aug 23 2025, 00:19:25 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink_ml = k*l;
    
    int drink_units = total_drink_ml/nl;
    int lime_slices = c*d;
    int salt_units = p/np;

    cout << min(drink_units, min(lime_slices, salt_units)) / n << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
