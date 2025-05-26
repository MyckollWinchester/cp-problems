/*
* Hulk
* https://codeforces.com/problemset/problem/705/A
* Mon May 19 2025, 17:57:15 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "I ";
        cout << (i % 2 ? "love " : "hate ");
        cout << (i < n - 1 ? "that " : "it\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
