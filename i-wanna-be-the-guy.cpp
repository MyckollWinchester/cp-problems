/*
* I Wanna Be the Guy
* https://codeforces.com/problemset/problem/469/A
* Tue Sep 24 2024, 23:20:27 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, p, q;
    cin >> n >> p;
    set<int> s;
    while (p--) {
        int a;
        cin >> a;
        s.insert(a);
    }
    cin >> q;
    while (q--) {
        int a;
        cin >> a;
        s.insert(a);
    }
    cout << (s.size() == n ? "I become the guy." : "Oh, my keyboard!") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
