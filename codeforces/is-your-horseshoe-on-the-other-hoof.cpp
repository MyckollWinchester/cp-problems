/*
* Is your horseshoe on the other hoof?
* https://codeforces.com/problemset/problem/228/A
* Tue Sep 24 2024, 22:30:35 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> s = {s1, s2, s3, s4};
    cout << 4 - s.size() << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
