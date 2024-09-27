/*
* Hit the Lottery
* https://codeforces.com/problemset/problem/996/A
* Thu Sep 26 2024, 23:33:45 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    ans += n / 100;
    n %= 100;
    ans += n / 20;
    n %= 20;
    ans += n / 10;
    n %= 10;
    ans += n / 5;
    n %= 5;
    cout << ans + n << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
