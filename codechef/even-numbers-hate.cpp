/*
* Even Numbers Hate
* https://www.codechef.com/problems/EVENHATE
* Wed Oct 16 2024, 12:38:16 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, evens, odds, ans;
    cin >> n;
    evens = odds = ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a%2)
            ++odds;
        else
            ++evens;
    }
    if (odds)
        ans = evens + 1 + (odds-1)/2;
    cout << ans << '\n';
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
