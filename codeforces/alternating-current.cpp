/*
* Alternating Current
* https://codeforces.com/problemset/problem/343/B
* Mon Oct 28 2024, 20:10:50 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int c1, c2;
    c1 = c2 = 0;
    for (int i = 1; char &c : s) {
        if (i%2) {
            if (c == '-')
                c2++;
            else
                c1++;
        } else {
            if (c == '-')
                c1++;
            else
                c2++;
        }
        i++;
    }
    cout << (c1 == c2 ? "Yes" : "No") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
