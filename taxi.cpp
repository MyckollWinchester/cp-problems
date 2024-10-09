/*
* Taxi
* https://codeforces.com/contest/158/problem/B
* Wed Oct 09 2024, 01:25:57 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n;
    int ans, ones, twos, threes;
    ans = ones = twos = threes = 0;
    while (n--) {
        cin >> s;
        switch (s) {
        case 1:
            ones++;
            break;
        case 2:
            twos++;
            break;
        case 3:
            threes++;
            break;
        case 4:
            ans++;
            break;
        default:
            break;
        }
    }
    ans += min(ones, threes);
    // temp variable to prevent side effects on line 37
    int _threes = max(0, threes - ones);
    ones = max(0, ones - threes);
    ans += _threes;
    ans += twos/2;
    twos %= 2;
    ones = max(0, ones - 2*twos);
    ans += twos;
    ans += ones/4 + (ones%4 > 0);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
