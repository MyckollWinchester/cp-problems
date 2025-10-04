/*
* Multiply by 2, divide by 6
* https://codeforces.com/problemset/problem/1374/B
* Sat Oct 04 2025, 00:16:00 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;

    int i;
    ll x = 1;

    for (i = 0; x != n; ++i) {
        if (x < n) {
            x *= 6;
        } else if (x > n) {
            if (x % 2 != 0) {
                cout << "-1\n";
                return;
            }
            x /= 2;
        }
    }

    cout << i << '\n';
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
