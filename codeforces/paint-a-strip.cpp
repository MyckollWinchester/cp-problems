/*
* Paint a Strip
* https://codeforces.com/problemset/problem/2040/B
* Fri Sep 26 2025, 00:44:26 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

// 3 * 2^n - 2
vector<int> lookup = {0, 1, 4, 10, 22, 46, 94, 190, 382, 766, 1534, 3070, 6142, 12286, 24574, 49150, 98302, 196606};

void solve() {
    int n;
    cin >> n;
    cout << lower_bound(lookup.begin(), lookup.end(), n) - lookup.begin() << '\n';
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
