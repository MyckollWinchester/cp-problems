/*
* Nineball
* https://atcoder.jp/contests/abc484/tasks/abc484_b
* Sat Nov 14 2026, 09:11:55 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k; cin >> k;
    bool nine = false;
    int mn = 9;

    for (int i = 0; i < k; ++i) {
        int a; cin >> a;
        if (a == 9) nine = true;
        mn = min(mn, a);
    }

    cout << (nine ? mn : -1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
