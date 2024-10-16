/*
* Amusing Joke
* https://codeforces.com/contest/141/problem/A
* Tue Oct 15 2024, 22:17:09 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n1, n2, s;
    cin >> n1 >> n2 >> s;
    n1 += n2;
    sort(n1.begin(), n1.end());
    sort(s.begin(), s.end());
    cout << (n1 == s ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
