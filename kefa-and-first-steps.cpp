/*
* Kefa and First Steps
* https://codeforces.com/contest/580/problem/A
* Wed Oct 09 2024, 00:44:21 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a;
    cin >> n;
    int ans = 1;
    int curr = 0;
    int prev = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        curr = a >= prev ? curr + 1 : 1;
        prev = a;
        if (curr > ans)
            ans = curr;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
