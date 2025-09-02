/*
* No Casino in the Mountains
* https://codeforces.com/contest/2126/problem/B
* Mon Sep 01 2025, 17:49:41 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, a;
    cin >> n >> k;

    int days = 0;
    int hikes = 0;
    bool on_break = false;

    while (n--) {
        cin >> a;
        if (on_break) {
            on_break = false;
            continue;
        }
        if (a == 1) {
            days = 0;
            continue;
        }
        days++;
        if (days == k) {
            days = 0;
            hikes++;
            on_break = true;
        }
    }

    cout << hikes << '\n';
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
