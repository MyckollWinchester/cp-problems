/*
* Beautiful Year
* https://codeforces.com/problemset/problem/271/A
* Tue Sep 30 2025, 17:01:07 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int y;
    cin >> y;
    while (true) {
        string y_str = to_string(++y);
        set<char> y_unique(y_str.begin(), y_str.end());
        if (y_str.length() == y_unique.size()) break;
    }
    cout << y << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
