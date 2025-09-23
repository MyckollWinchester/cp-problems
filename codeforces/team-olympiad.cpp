/*
* Team Olympiad
* https://codeforces.com/problemset/problem/490/A
* Mon Sep 22 2025, 21:14:44 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ones, twos, threes;
    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        if (t == 1)
            ones.push_back(i);
        else if (t == 2)
            twos.push_back(i);
        else
            threes.push_back(i);
    }

    int teams_size = min({ones.size(), twos.size(), threes.size()});
    
    cout << teams_size << '\n';
    for (int i = 0; i < teams_size; ++i)
        cout << ones[i] << ' ' << twos[i] << ' ' << threes[i] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
