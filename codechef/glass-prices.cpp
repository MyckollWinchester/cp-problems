/*
* Glass Prices
* https://www.codechef.com/problems/GLPR
* Wed Oct 23 2024, 11:33:22 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    cout << (y <= x*2 ? "METAL" : "PLASTIC") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
