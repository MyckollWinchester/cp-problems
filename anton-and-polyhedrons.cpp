/*
* Anton and Polyhedrons
* https://codeforces.com/problemset/problem/785/A
* Thu Sep 26 2024, 23:46:37 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        if (s == "Tetrahedron")
            ans += 4;
        else if (s == "Cube")
            ans += 6;
        else if (s == "Octahedron")
            ans += 8;
        else if (s == "Dodecahedron")
            ans += 12;
        else
            ans += 20;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
