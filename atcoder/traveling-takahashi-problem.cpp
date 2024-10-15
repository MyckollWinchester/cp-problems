/*
* Traveling Takahashi Problem
* https://atcoder.jp/contests/abc375/tasks/abc375_b
* Sat Oct 12 2024, 09:24:58 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long double ld;

ld dist(ld x1, ld y1, ld x2, ld y2) {
    return sqrtl((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

void solve() {
    int n;
    cin >> n;
    ld xprev, yprev, xi, yi, ans;
    xprev = yprev = ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> xi >> yi;
        ans += dist(xprev, yprev, xi, yi);
        xprev = xi;
        yprev = yi;
    }
    ans += dist(0, 0, xprev, yprev);
    cout << setprecision(1000) << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
