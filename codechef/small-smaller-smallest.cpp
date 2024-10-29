/*
* Small, Smaller, Smallest
* https://www.codechef.com/problems/BSHORT
* Wed Oct 23 2024, 13:09:26 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s >> s;
    sort(s.begin(), s.end());
    int zeroes = upper_bound(s.begin(), s.end(), '0') - lower_bound(s.begin(), s.end(), '0');
    int ones = upper_bound(s.begin(), s.end(), '1') - lower_bound(s.begin(), s.end(), '1');
    if (!ones) {
        cout << s.length() << '\n';
    } else if (ones % 2)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
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
