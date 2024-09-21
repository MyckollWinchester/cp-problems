/*
* Robin Helps
* https://codeforces.com/contest/2014/problem/A
* Sat Sep 21 2024, 11:49:41 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int gold = 0;
    int given = 0;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a >= k) {
            gold += a;
        } else if (a == 0) {
            if (gold) {
                given++;
                gold--;
            }
        }
    }
    cout << given << "\n";
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
