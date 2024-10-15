/*
* Presents
* https://codeforces.com/problemset/problem/136/A
* Mon Sep 23 2024, 22:34:58 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

template<typename T> void print(vector<T> x){for(auto i: x) cout << i << ' ';cout << "\n";}

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 1; i < n+1; ++i) {
        int pi;
        cin >> pi;
        p[pi-1] = i;
    }
    print(p);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
