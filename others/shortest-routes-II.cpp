/*
* Shortest Routes II
* https://cses.fi/problemset/task/1672/
* Mon May 19 2025, 18:55:10 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<long long>> dist(n+1, vector<long long>(n+1, LLONG_MAX));
    for (int i = 1; i <= n; i++) dist[i][i] = 0;
    while (m--) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        if (w < dist[u][v]) {
            dist[u][v] = w;
            dist[v][u] = w;
        }
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            if (dist[i][k] == LLONG_MAX) continue;
            for (int j = 1; j <= n; j++) {
                if (dist[k][j] == LLONG_MAX) continue;
                long long nd = dist[i][k] + dist[k][j];
                if (nd < dist[i][j]) dist[i][j] = nd;
            }
        }
    }
    while (q--) {
        int u, v;
        cin >> u >> v;
        long long ans = dist[u][v];
        if (ans == LLONG_MAX) cout << -1 << '\n';
        else cout << ans << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
