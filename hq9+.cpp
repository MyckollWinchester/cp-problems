/*
* HQ9+
* https://codeforces.com/problemset/problem/133/A
* Tue Sep 24 2024, 22:52:55 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    bool flag = false;
    for (char c : s)
        if (c == 'H' || c == 'Q' || c == '9') {
            flag = true;
            break;
        }
    cout << (flag ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
