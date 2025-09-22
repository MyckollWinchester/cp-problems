/*
* Lasers
* https://codeforces.com/problemset/problem/2148/B
* Sun Sep 21 2025, 15:23:51 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

inline void ignoreline(){string ignore; getline(cin, ignore);}

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < 3; ++i) ignoreline();
    cout << n + m << '\n';
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
