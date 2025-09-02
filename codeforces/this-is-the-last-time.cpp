/*
* This Is the Last Time
* https://codeforces.com/contest/2126/problem/D
* Mon Sep 01 2025, 20:38:20 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

struct Casino {
    int l, r, real;
};

void solve() {
    int n, k;
    cin >> n >> k;

    vector<Casino> casinos(n);
    for (int i = 0; i < n; i++)
        cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;

    sort(casinos.begin(), casinos.end(), [](auto &a, auto &b) {
        return a.l < b.l;
    });

    int i = 0;
    priority_queue<pair<int, int>> pq;

    while (true) {
        while (i < n && casinos[i].l <= k) {
            pq.push({casinos[i].real, casinos[i].r});
            i++;
        }

        while (!pq.empty() && pq.top().second < k) {
            pq.pop();
        }

        if (pq.empty()) break;

        k = max(k, pq.top().first);
        pq.pop();
    }

    cout << k << "\n";
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
