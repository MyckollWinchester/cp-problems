/*
* Dijkstra?
* https://codeforces.com/contest/20/problem/C
* Wed Aug 27 2025, 21:16:05 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<pair<int, ll>>> graph;
vector<ll> dist;
vector<int> parent;

void dijkstra(int s) {
    priority_queue<pair<int, ll>, vector<pair<int, ll>>, greater<pair<int, ll>>> pq;
    dist[s] = 0;
    pq.push({0, s});
 
    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        
        if (d > dist[u]) continue;
 
        for (auto [v, w] : graph[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    graph = vector<vector<pair<int, ll>>>(n+1);
    dist = vector<ll>(n+1, 1e18);
    parent = vector<int>(n+1, -1);

    while (m--) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
        graph[v].emplace_back(u, w);
    }

    dijkstra(1);

    if (dist[n] == 1e18) {
        cout << "-1\n";
        return;
    }

    vector<int> path;
    
    for (int v = n; v != -1; v = parent[v])
        path.push_back(v);
    reverse(path.begin(), path.end());

    for (int v : path)
        cout << v << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
