/*
* Stage Clear
* https://atcoder.jp/contests/abc422/tasks/abc422_a
* Sun Sep 07 2025, 01:15:19 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    char world = s[0], stage = s[2];
    if (stage == '8') {
        world++;
        stage = '1';
    } else stage++;
    cout << world << '-' << stage << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
