/*
* Perfect
* https://atcoder.jp/contests/abc424/tasks/abc424_b
* Sat Sep 20 2025, 09:16:33 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> vec(n), ans;
    while (k--) {
        int a, _;
        cin >> a >> _;
        if (++vec[a-1] == m)
            ans.push_back(a);
    }
    for (int a : ans)
        cout << a << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
