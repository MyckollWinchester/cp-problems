/*
* Raising Bacteria
* https://codeforces.com/problemset/problem/579/A
* Thu Sep 18 2025, 13:36:02 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    string bin = bitset<30>(x).to_string();
    cout << count(bin.begin(), bin.end(), '1') << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
