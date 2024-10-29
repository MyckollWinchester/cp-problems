/*
* Non-matching Name
* https://www.codechef.com/problems/ABNOMAT
* Wed Oct 23 2024, 11:41:32 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s1 >> s1 >> s2;
    char c;
    for (c = 'a'; c <= 'z'; ++c) {
        if (s1.find(c) == string::npos && s2.find(c) == string::npos)
            break;
    }
    cout << (c <= 'z' ? "YES" : "NO") << '\n';
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
