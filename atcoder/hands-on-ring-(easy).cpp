/*
* Hands on Ring (Easy)
* https://atcoder.jp/contests/abc376/tasks/abc376_b
* Sat Oct 19 2024, 09:41:12 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q, t, ans = 0;
    char h;
    cin >> n >> q;
    int posL = 1, posR = 2;
    while (q--) {
        cin >> h >> t;
        if (h == 'L') {
            if (posL < posR && t < posR)
                ans += abs(posL - t);
            else if (posL < posR && posR < t)
                ans += abs(n - t + posL);
            else if (posR < posL && t < posR)
                ans += abs(n - posL + t);
            else if (posR < posL && posR < t)
                ans += abs(posL - t);
            posL = t;
        } else {
            if (posR < posL && t < posL)
                ans += abs(posR - t);
            else if (posR < posL && posL < t)
                ans += abs(n - t + posR);
            else if (posL < posR && t < posL)
                ans += abs(n - posR + t);
            else if (posL < posR && posL < t)
                ans += abs(posR - t);
            posR = t;
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
