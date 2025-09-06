/*
* Cheap Travel
* https://codeforces.com/problemset/problem/466/A
* Fri Sep 05 2025, 23:58:42 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int ans = 0;

    while (n > 0) {
        if (b < min(m,n)*a) {
            ans += b;
            n -= m;
        } else {
            ans += a;
            n--;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
