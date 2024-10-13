/*
* Games
* https://codeforces.com/contest/268/problem/A
* Sun Oct 13 2024, 14:06:48 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> home(n), guest(n);
    for (int i = 0; i < n; ++i) {
        cin >> home[i];
        cin >> guest[i];
    }
    sort(home.begin(), home.end());
    int ans = 0;
    for (int g : guest) {
        auto lb = lower_bound(home.begin(), home.end(), g);
        auto up = upper_bound(home.begin(), home.end(), g);
        ans += (up != lb ? up - lb : 0);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
