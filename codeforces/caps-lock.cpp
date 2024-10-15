/*
* cAPS lOCK
* https://codeforces.com/contest/131/problem/A
* Mon Oct 14 2024, 23:40:08 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    bool change = true;
    for (int i = 1; i < s.length(); ++i)
        if (s[i] >= 'a' && s[i] <= 'z') {
            change = false;
            break;
        }
    if (change)
        transform(s.begin(), s.end(), s.begin(), [] (char c) { 
            if (c <= 'Z') 
                return tolower(c);
            return toupper(c);
        });
    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
