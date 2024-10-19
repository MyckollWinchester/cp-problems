/*
* Prepare Another Box
* https://atcoder.jp/contests/abc376/tasks/abc376_c
* Sat Oct 19 2024, 10:18:00 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n-1);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n-1; ++i)
        cin >> b[i];
    sort(all(a), greater<int>());
    sort(all(b), greater<int>());
    int i;
    for (i = 0; i < n - 1; ++i) {
        if (a[i] > b[i])
            break;
    }
    int ans = a[i];
    b.insert(b.begin() + i, ans);
    for (int j = i + 1; j < n; ++j) {
        if (b[j] < a[j]) {
            ans = -1;
            break;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
