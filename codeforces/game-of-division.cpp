/*
* Game of Division
* https://codeforces.com/contest/2040/problem/A
* Fri Sep 26 2025, 00:57:46 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int choose = 0;
    for (int i = 0; i < n; ++i) {
        int broke = false;
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            if (abs(a[i] - a[j]) % k == 0) {
                broke = true;
                break;
            }
        }
        if (!broke) {
            choose = i + 1;
            break;
        }
    }
    cout << (choose ? "YES\n" + to_string(choose) : "NO") << '\n';
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
