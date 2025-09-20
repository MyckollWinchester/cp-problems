/*
* New Skill Acquired
* https://atcoder.jp/contests/abc424/tasks/abc424_c
* Sat Sep 20 2025, 12:11:45 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<int> visited;

void dfs(int v) {
    if (visited[v]) return;
    visited[v] = true;
    for (int u : graph[v])
        dfs(u);
}

void solve() {
    int n;
    cin >> n;

    graph = vector<vector<int>>(n+1);
    vector<int> roots;

    for (int i = 1; i <= n; ++i) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            roots.push_back(i);
        graph[a].push_back(i);
        graph[b].push_back(i);
    }
    
    visited = vector<int>(n+1);
    for (int root : roots)
        dfs(root);
    
    cout << count(visited.begin(), visited.end(), true) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
