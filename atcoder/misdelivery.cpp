/*
* Misdelivery
* https://atcoder.jp/contests/abc421/tasks/abc421_a
* Sat Aug 30 2025, 08:04:58 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    vector<string> names(n);
    for (int i = 0; i < n; ++i)
        cin >> names[i];
    string y;
    cin >> x >> y;
    cout << (names[x-1] == y ? "Yes" : "No") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
