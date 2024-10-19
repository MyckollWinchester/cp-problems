/*
* Minimise Oneness
* https://codeforces.com/contest/2030/problem/B
* Sat Oct 19 2024, 11:29:49 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    cout << '0';
    if (n > 1)
        cout << '1' << string(n-2, '0');
    cout << '\n';
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
