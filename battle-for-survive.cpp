/*
* Battle for Survive
* https://codeforces.com/contest/2013/problem/B
* Fri Sep 20 2024, 12:10:42 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    ll cum = 0;
    for (int i = 0; i < n - 2; ++i) {
        ll a;
        cin >> a;
        cum += a;
    }
    ll y, z;
    cin >> y >> z;
    cout << z - (y - cum) << "\n";
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
