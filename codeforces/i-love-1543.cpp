/*
* I Love 1543
* https://codeforces.com/problemset/problem/2036/D
* Sat Nov 02 2024, 14:22:00 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> rows(n);
    for (string &row : rows)
        cin >> row;
    int len_layers = min(n, m)/2;
    vector<string> layers;
    for (int layer = 0; layer < len_layers; ++layer) {
        string layers_str;
        for (int j = layer; j < m - layer; ++j)
            layers_str += rows[layer][j];
        for (int i = layer + 1; i < n - layer; ++i)
            layers_str += rows[i][m - layer - 1];
        for (int j = m - layer - 2; j >= layer; --j)
            layers_str += rows[n - layer - 1][j];
        for (int i = n - layer - 2; i > layer; --i)
            layers_str += rows[i][layer];
        layers.push_back(layers_str);
    }
    for (string &layer : layers)
        layer += layer.substr(0, 3);
    int ans = 0;
    for (string &layer : layers)
        for (int i = 0; i < layer.length() - 3; ++i)
            if (layer.substr(i, 4) == "1543")
                ++ans;
    cout << ans << '\n';
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
