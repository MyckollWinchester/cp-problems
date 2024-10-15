/*
* Gravity Flip
* https://codeforces.com/problemset/problem/405/A
* Tue Sep 24 2024, 22:59:02 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    while (n--) cin >> a[n];
    sort(a.begin(), a.end());
    for (int ai : a) cout << ai << " ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
