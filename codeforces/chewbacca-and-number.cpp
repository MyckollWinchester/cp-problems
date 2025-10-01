/*
* Chewbacca and Number
* https://codeforces.com/problemset/problem/514/A
* Wed Oct 01 2025, 11:27:16 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if (s[0] > '4' && s[0] != '9')
        s[0] = '0' + '9' - s[0];
    for (int i = 1; i < s.size(); ++i)
        if (s[i] > '4')
            s[i] = '0' + '9' - (char) s[i];
    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
