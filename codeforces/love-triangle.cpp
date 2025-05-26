/*
* Love Triangle
* https://codeforces.com/contest/939/problem/A
* Mon May 19 2025, 18:25:26 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> planes(n+1);
    for (int i = 1; i <= n; ++i)
        cin >> planes[i];
    for (int i = 1; i <= n; ++i) {
        if (planes[i] == planes[planes[planes[planes[i]]]]) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
