/*
* Looped Rope
* https://atcoder.jp/contests/abc422/tasks/abc422_b
* Sun Sep 07 2025, 01:29:17 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
int h, w;

int count_adj(int i, int j) {
    int count = 0;
    if (i != 0)
        if (grid[i-1][j] == '#')
            count++;
    if (j != 0)
        if (grid[i][j-1] == '#')
            count++;
    if (i != h-1)
        if (grid[i+1][j] == '#')
            count++;
    if (j != w-1)
        if (grid[i][j+1] == '#')
            count++;
    return count;
}

void solve() {
    cin >> h >> w;
    grid = vector<string>(h);
    for (int i = 0; i < h; ++i)
        cin >> grid[i];
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (grid[i][j] == '#') {
                if (count_adj(i, j) != 2 && count_adj(i, j) != 4) {
                    cout << "No\n";
                    return;
                }
            }
        }
    }
    cout << "Yes\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
