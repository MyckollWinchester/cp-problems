/*
* Vanya and Lanterns
* https://codeforces.com/problemset/problem/492/B
* Sat Nov 02 2024, 01:41:32 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l, a;
    cin >> n >> l;
    set<int> s;
    while (n-- && cin >> a)
        s.insert(a);
    auto it1 = s.begin();
    auto it2 = next(s.begin());
    int mx = 0;
    while (it2 != s.end()) {
        mx = max(mx, *it2 - *it1);
        it1++;
        it2++;
    }
    long double edge = max(*s.begin(), l - *s.rbegin());
    cout << fixed << setprecision(10) << max(edge, (long double) mx / 2) <<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
