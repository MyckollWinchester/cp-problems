/*
* Only Pluses
* https://codeforces.com/contest/1992/problem/A
* Wed Sep 18 2024, 23:32:46 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    for (int i = 0; i < 5; ++i) {
        int t = pq.top() + 1;
        pq.pop();
        pq.push(t);
    }
    int ans = 1;
    while (!pq.empty()) {
        ans *= pq.top();
        pq.pop();
    }
    cout << ans << "\n";
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
