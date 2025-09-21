/*
* Design Tutorial: Learn from Math
* https://codeforces.com/problemset/problem/472/A
* Sun Sep 21 2025, 03:51:01 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

bool not_composite(int n) {
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i < sqrt(n); i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void solve() {
    int n;
    cin >> n;
    int i, j;
    for (i = 4, j = n - 4; i <= j; ++i, --j) {
        if (i%2)
            if (not_composite(i))
                continue;
        if (j%2)
            if (not_composite(j))
                continue;
        break;
    }
    cout << i << ' ' << j << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
