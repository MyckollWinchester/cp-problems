/*
* How Much Does Daytona Cost?
* https://codeforces.com/problemset/problem/1878/A
* Fri Oct 03 2025, 00:40:28 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

inline void ignoreline(){string ignore; getline(cin, ignore);}

void solve() {
    int n, k;
    cin >> n >> k;

    while (n--) {
        int a;
        cin >> a;
        if (a == k) {
            cout << "YES\n";
            if (n != 0) ignoreline();
            return;
        }
    }

    cout << "NO\n";
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
