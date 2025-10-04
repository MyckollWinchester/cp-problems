/*
* Mishka and Game
* https://codeforces.com/problemset/problem/703/A
* Fri Oct 03 2025, 23:46:40 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int m_wins = 0;
    int c_wins = 0;
    
    while (n--) {
        int m, c;
        cin >> m >> c;
        if (m > c) m_wins++;
        else if (m < c) c_wins++;
    }
    
    cout << (m_wins == c_wins ? "Friendship is magic!^^" : (m_wins > c_wins ? "Mishka" : "Chris")) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
