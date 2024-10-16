/*
* Registration System
* https://codeforces.com/contest/4/problem/C
* Tue Oct 15 2024, 21:23:12 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<string, int> m;
    while (n--) {
        string name;
        cin >> name;
        cout << (m[name]++ ? name + to_string(m[name]-1) : "OK") << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
