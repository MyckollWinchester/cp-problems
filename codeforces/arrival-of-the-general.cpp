/*
* Arrival of the General
* https://codeforces.com/problemset/problem/144/A
* Wed Sep 25 2024, 17:15:55 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    pair<int, int> _min = {101, -1}, _max = {0, -1};
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a <= _min.first)
            _min = {a, i};
        if (a > _max.first)
            _max = {a, i};
    }
    cout << n - 1 - _min.second + _max.second - (_max.second > _min.second) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
