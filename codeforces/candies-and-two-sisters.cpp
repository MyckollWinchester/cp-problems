/*
* Candies and Two Sisters
* https://codeforces.com/contest/1335/problem/A
* Tue Oct 15 2024, 01:01:20 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    cout << n/2 - !(n%2) << '\n';
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
