/*
* Colorful Stamp
* https://codeforces.com/contest/1669/problem/D
* Tue Oct 08 2024, 01:15:07 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, i;
    cin >> n;
    string s;
    cin >> s;
    for (i = 0; i < n; ++i) {
        while (s[i] == 'W' && i < n)
            ++i;
        if (i == n)
            break;
        bool b, r;
        b = r = false;
        while (s[i] != 'W' && i < n) {
            if (s[i] == 'B')
                b = true;
            else if (s[i] == 'R')   
                r = true;
            ++i;
        }
        if (!b || !r) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
