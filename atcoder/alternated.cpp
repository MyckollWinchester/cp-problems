/*
* Alternated
* https://atcoder.jp/contests/abc421/tasks/abc421_c
* Sat Aug 30 2025, 08:43:47 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    ll a_first = 0, b_first = 0;
    for (int i = 0, pos = 0; i < 2*n; ++i) {
        if (s[i] == 'A') {
            a_first += llabs(i - pos);
            pos += 2;
        }
    }
    for (int i = 0, pos = 0; i < 2*n; ++i) {
        if (s[i] == 'B') {
            b_first += llabs(i - pos);
            pos += 2;
        }
    }
    cout << min(a_first, b_first) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
