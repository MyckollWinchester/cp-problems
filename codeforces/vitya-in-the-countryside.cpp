/*
* Vitya in the Countryside
* https://codeforces.com/problemset/problem/719/A
* Tue Sep 02 2025, 14:04:48 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n;
    if (n == 1) {
        cin >> x;
        if (x == 15) { cout << "DOWN\n"; return;}
        if (x == 0) { cout << "UP\n"; return;}
        cout << "-1\n";
        return;
    }
    while (n-- > 2) cin >> x;
    cin >> x >> y;
    cout << ((x < y && y != 15) || (x > y && y == 0) ? "UP" : "DOWN") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
