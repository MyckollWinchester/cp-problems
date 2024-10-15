/*
* Fox And Snake
* https://codeforces.com/contest/510/problem/A
* Tue Oct 15 2024, 01:13:13 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string snake(m, '#'), dots(m, '.');
    bool right = true;
    for (int i = 1; i <= n; ++i) {
        if (i%2) {
            cout << snake << '\n';
        } else {
            dots[(1-right)*(m-1)] = '.';
            dots[right*(m-1)] = '#';
            cout << dots << '\n';
            right = !right;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
