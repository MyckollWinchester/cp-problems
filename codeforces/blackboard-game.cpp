/*
* Blackboard Game
* https://codeforces.com/problemset/problem/2123/A
* Wed Sep 24 2025, 13:18:58 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    cout << (n % 4 == 0 ? "Bob" : "Alice") << '\n';
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
