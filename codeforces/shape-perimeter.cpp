/*
* Shape Perimeter
* https://codeforces.com/problemset/problem/2056/A
* Sun Sep 21 2025, 21:55:13 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, x_sum, y_sum;
    cin >> n >> m >> x_sum >> y_sum;
    x_sum = 0, y_sum = 0;
    while (--n) {
        int x, y;
        cin >> x >> y;
        x_sum += x;
        y_sum += y;
    }
    cout << 2 * (x_sum + y_sum + 2*m) << '\n';   
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
