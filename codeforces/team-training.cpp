/*
* Team Training
* https://codeforces.com/problemset/problem/2091/B
* Mon Apr 21 2025, 22:55:30 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, strength, cnt_members = 0, ans = 0;
    cin >> n >> x;
    vector<int> members(n);
    for (int i = 0; i < n; ++i)
        cin >> members[i];
    sort(members.rbegin(), members.rend());
    for (int weakest_member : members) {
        cnt_members++;
        strength = cnt_members * weakest_member;
        if (strength >= x) {
            cnt_members = 0;
            ans++;
        }
    }
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
