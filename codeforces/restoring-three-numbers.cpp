/*
* Restoring Three Numbers
* https://codeforces.com/problemset/problem/1154/A
* Tue Aug 26 2025, 00:52:30 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

/*
As we are working with positive integers we know that
a + b + c should be the largest number in the board.
Then, if we substract the result of any pair sum, let's
say a + b, from the result of a + b + c, then we will end
up with a + b + c - (a + b) = c. So if we substract all
the lower values from the highest on the board we essentially
find a, b, c in no particular order.
*/

void solve() {
    vector<int> x(4);
    for (int i = 0; i < 4; ++i) cin >> x[i];
    sort(x.begin(), x.end(), greater<int>());
    for (int i = 1; i < 4; ++i) cout << x[0] - x[i] << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
