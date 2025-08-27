/*
* Sereja and Dima
* https://codeforces.com/problemset/problem/381/A
* Wed Aug 27 2025, 00:05:22 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) cin >> cards[i];

    int sereja = 0, dima = 0;
    for (int turn = 0, i = 0, j = n-1; i <= j; turn++) {
        int mx = max(cards[i], cards[j]);

        if (turn % 2 == 0) sereja += mx;
        else dima += mx;

        if (cards[i] == mx) i++;
        else j--;
    }

    cout << sereja << ' ' << dima << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
