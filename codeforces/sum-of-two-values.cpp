/*
* Sum of Two Values
* https://codeforces.com/problemset/gymProblem/102961/G
* Tue Oct 29 2024, 12:59:41 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, target;
    cin >> n >> target;
    vector<pair<ll, int>> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i].first, a[i].second = i+1;
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    while (i < j) {
        ll sum = a[i].first + a[j].first;
        if (sum == target) {
            cout << a[i].second << ' ' << a[j].second << '\n';
            return;
        } else if (sum < target) {
            ++i;
        } else {
            --j;
        }
    }
    cout << -1 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
