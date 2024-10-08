/*
* Interesting drink
* https://codeforces.com/contest/706/problem/B
* Mon Oct 07 2024, 23:19:43 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n, q, m;
    cin >> n;
    vector<int> drinks(n);
    for (int i = 0; i < n; ++i)
        cin >> drinks[i];
    sort(all(drinks));
    cin >> q;
    while (q--) {
        cin >> m;
        if (m < drinks[0]) {
            cout << 0 << '\n';
            continue;
        }
        if (m >= drinks.back()) {
            cout << n << '\n';
            continue;
        }
        auto it = upper_bound(all(drinks), m);
        cout << it - drinks.begin() << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        solve();
    return 0;
}
