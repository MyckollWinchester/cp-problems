/*
* Most Minority
* https://atcoder.jp/contests/abc420/tasks/abc420_b
* Sun Aug 24 2025, 08:09:49 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> votes(n);
    for (int i = 0; i < n; ++i) cin >> votes[i];

    // votes_0, votes_1
    vector<pair<int, int>> points_assignation(m);
    
    for (int i = 0; i < m; ++i) {
        int x = 0;
        int y = 0;
        for (int j = 0; j < n; ++j) {
            if (votes[j][i] == '0') {
                x++;
            } else {
                y++;
            }
        }
        if ((x == 0) || (y == 0)) {
            points_assignation[i] = {1, 1};
        } else if (x < y) {
            points_assignation[i] = {1, 0};
        } else {
            points_assignation[i] = {0, 1};
        }
    }
    
    // points, identifier
    vector<pair<int, int>> points(n);

    for (int id = 0; id < n; ++id) {
        for (int i = 0; i < m; ++i) {
            if (votes[id][i] == '0') {
                points[id] = { points[id].first + points_assignation[i].first, id };
            } else {
                points[id] = { points[id].first + points_assignation[i].second, id };
            }
        }
    }

    int mx = 0;
    for (auto p : points) {
        mx = max(mx, p.first);
    }

    sort(points.begin(), points.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    });
    
    for (auto p : points) {
        if (p.first == mx) {
            cout << p.second + 1 << ' ';
        } else {
            break;
        }
    }
    
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
