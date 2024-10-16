/*
* Sweets Shop
* https://www.codechef.com/problems/SWEETSHOP
* Wed Oct 16 2024, 12:08:36 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, n;
	cin >> x >> n;
	cout << (x - n*10) / 20 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
