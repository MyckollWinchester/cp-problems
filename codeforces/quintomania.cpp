/*
* Quintomania
* https://codeforces.com/problemset/problem/2036/A
* Sat Nov 02 2024, 14:19:06 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, prev, curr;
    cin >> n >> prev;
    for (int i = 0; i < n-1; ++i) {
        cin >> curr;
        if (abs(prev - curr) == 5 || abs(prev - curr) == 7) {
            prev = curr;
            continue;
        }
        if (i < n-2) {
            string ignore;
            getline(cin, ignore);
        }
        cout << "NO\n";
        return;
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
