/*
* Anya and 1100
* https://codeforces.com/problemset/problem/2036/C
* Sat Nov 02 2024, 13:40:26 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    int n, q;
    cin >> s >> q;
    n = s.length();
    vector<bool> where(n-3);
    int found = 0;
    for (int i = 0; i < n - 3; ++i)
        if (s.substr(i, 4) == "1100") {
            where[i] = true;
            found++;
        }
    for (int i = 0; i < q; ++i) {
        int pos;
        char val;
        cin >> pos >> val;
        s[--pos] = val;
        for (int i = max(0, pos-3); i < min(n-3, pos+1); ++i) {
            if (s.substr(i, 4) == "1100" && !where[i]) {
                where[i] = true;
                found++;
            } else if (s.substr(i, 4) != "1100" && where[i]) {
                where[i] = false;
                found--;
            }
        }
        cout << (found ? "YES" : "NO") << '\n';
    }
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
