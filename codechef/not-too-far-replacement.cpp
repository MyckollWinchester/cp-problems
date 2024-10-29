/*
* Not-too-far Replacement
* https://www.codechef.com/problems/TWOCLOSE
* Wed Oct 23 2024, 11:52:00 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, b;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a.begin(), a.end());
    cin >> b;
    for (int i = 0; i < n; ++i) {
        if (a[i] > 2*b)
            continue;
        if (a[i] > b) {
            swap(a[i], b);
            continue;
        }
    }
    cout << reduce(a.begin(), a.end()) << '\n';
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
