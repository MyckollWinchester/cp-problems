/*
* Hulk
* https://codeforces.com/problemset/problem/705/A
* Tue Sep 24 2024, 22:40:21 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        if (i%2)
            cout << "I love ";
        else
            cout << "I hate ";
        if (i < n-1)
            cout << "that ";
        else
            cout << "it";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
