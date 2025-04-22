/*
* Elevator Pitch
* UKIEPC 2020, Problem E
* Tue Apr 22 2025, 00:12:24 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

int h, w;
int arr[500][500];
vector<pair<int, pair<int, int>>> height_coords;

void check_neighbors(int val, int i, int j) {
    arr[i][j] = 0;
    // check up neighbor
    if (i > 0 && arr[i-1][j] != 0 && arr[i-1][j] <= val)
        check_neighbors(arr[i-1][j], i-1, j);
    // check bottom neighbor
    if (i < h - 1 && arr[i+1][j] != 0 && arr[i+1][j] <= val)
        check_neighbors(arr[i+1][j], i+1, j);
    // check left neighbor
    if (j > 0 && arr[i][j-1] != 0 && arr[i][j-1] <= val)
        check_neighbors(arr[i][j-1], i, j-1);
    // check right neighbor
    if (j < w - 1 && arr[i][j+1] != 0 && arr[i][j+1] <= val)
        check_neighbors(arr[i][j+1], i, j+1);
}

void solve() {
    cin >> h >> w;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                arr[i][j] = 0;
            if (arr[i][j] != 0)
                height_coords.push_back({arr[i][j], {i, j}});
        }
    }

    sort(height_coords.begin(), height_coords.end(), [](const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {
        return a.first > b.first;
    });
    

    int ans = 0;
    for (auto& [val, pos] : height_coords) {
        int i = pos.first, j = pos.second;
        if (arr[i][j] == 0)
            continue;
        ans++;
        check_neighbors(val, i, j);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
