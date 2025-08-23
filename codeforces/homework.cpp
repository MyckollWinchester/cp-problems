/*
* Homework
* https://codeforces.com/problemset/problem/2132/A
* Sat Aug 21 2025, 10:48:57 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b, turns;
    cin >> a >> a >> b >> b >> turns;
    for (int i = 0; i < turns.length(); ++i) {
        if (turns[i] == 'D') {
            a = a + b[i];
        } else {
            a = b[i] + a;
        }
    }
    cout << a << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
