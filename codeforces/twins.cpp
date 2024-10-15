/*
* Twins
* https://codeforces.com/problemset/problem/160/A
* Sun Sep 22 2024, 21:31:55 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int target = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        target += a[i];
    }
    target = target/2;
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0, amount = 0;
    for (int i = 0; amount <= target; ++i) {
        amount += a[i];
        ans++;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
