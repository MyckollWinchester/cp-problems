/*
* Police Recruits
* https://codeforces.com/problemset/problem/427/A
* Mon Oct 21 2024, 01:33:56 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    partial_sum(v.begin(), v.end(), v.begin());
    cout << abs(min(0, *min_element(v.begin(), v.end()))) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
