/*
* Game with Integers
* https://codeforces.com/problemset/problem/1899/A
* Thu Sep 18 2025, 13:43:26 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << (n%3 == 0 ? "Second" : "First") << '\n';
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
