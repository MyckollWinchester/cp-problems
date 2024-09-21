/*
* Robin Hood and the Major Oak
* https://codeforces.com/contest/2014/problem/B
* Sat Sep 21 2024, 12:45:54 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    cout << ((k/2 + ((n - k + 1)%2 && k%2))%2 ? "NO" : "YES") << "\n";
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
