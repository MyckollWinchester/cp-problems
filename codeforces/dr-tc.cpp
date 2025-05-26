/*
* Dr. TC
* https://codeforces.com/problemset/problem/2106/A
* Mon May 06 2025, 10:45:02 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int ones = count(s.begin(), s.end(), '1');
    int zeroes = n - ones;
    cout << ones * (n - 1) + zeroes << '\n';
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
