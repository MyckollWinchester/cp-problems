/*
* The New Year: Meeting Friends
* https://codeforces.com/problemset/problem/723/A
* Mon Oct 21 2024, 01:24:32 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    cout << max(x1, max(x2, x3)) - min(x1, min(x2, x3)) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
