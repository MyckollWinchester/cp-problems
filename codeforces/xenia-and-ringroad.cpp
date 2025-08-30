/*
* Xenia and Ringroad
* https://codeforces.com/problemset/problem/339/B
* Sat Aug 30 2025, 01:26:42 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, a;
    cin >> n >> m;
    long long ans = 0;
    int prev = 1;
    int curr = 1;

    for (int i = 0; i < m; ++i) {
        cin >> a;
        if (curr < a) {
            prev = curr;
            curr = a;
            ans += curr - prev;
        } else if (curr > a) {
            prev = curr;
            curr = a;
            ans += n - prev + a;
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
