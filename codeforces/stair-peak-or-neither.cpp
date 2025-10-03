/*
* Stair, Peak, or Neither?
* https://codeforces.com/problemset/problem/1950/A
* Fri Oct 03 2025, 00:29:38 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
        cout << "STAIR";
    else if (a < b && b > c)
        cout << "PEAK";
    else
        cout << "NONE";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
