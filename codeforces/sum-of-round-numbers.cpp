/*
* Sum of Round Numbers
* https://codeforces.com/contest/1352/problem/A
* Wed Oct 16 2024, 17:38:09 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int k = n - ranges::count(s, '0');
    cout << k << '\n';
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0')
            continue;
        string zeroes(n - i - 1, '0');
        cout << s[i] << zeroes << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
