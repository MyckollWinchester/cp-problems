/*
* Normal is Good (Easy)
* https://www.codechef.com/problems/NORMALEZ
* Wed Oct 23 2024, 13:30:00 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    if (n == 1) {
        cin >> n;
        cout << 1 << '\n';
        return;
    }
    vector<ll> a(n), sub;
    ll prev, counter = 1;
    cin >> a[0];
    for (ll i = 1; i < n; ++i) {
        cin >> a[i];
        if (a[i] != a[i-1]) {
            sub.push_back(counter);
            counter = 0;
        }
        counter++;
    }
    sub.push_back(counter);
    ll sum = 0;
    for (ll s : sub)
        sum += s*(s+1)/2;
    cout << sum << '\n';
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
