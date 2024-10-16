/*
* Partition Score
* https://www.codechef.com/problems/PARTSCORE
* Wed Oct 16 2024, 13:02:27 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, ans;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    if (k == 1)
        ans = 2*a[0] + a[1] + a.back();
    else
        ans = a[0] + a[1] + a[k] + a.back();
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
