/*
* Find K Distinct Points with Fixed Center
* https://codeforces.com/contest/1998/problem/A
* Mon Sep 23 2024, 01:11:34 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int xc, yc, k;
    cin >> xc >> yc >> k;
    for (int i = 1; i <= k/2; ++i)
        cout << xc + i << " " << yc + i << "\n";
    for (int i = 1; i <= k/2; ++i)
        cout << xc - i << " " << yc - i << "\n";
    if (k%2)
        cout << xc << " " << yc << "\n";
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
