/*
* Anton and Letters
* https://codeforces.com/problemset/problem/443/A
* Thu Sep 26 2024, 23:41:08 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    set<char> letters;
    for (char c : s)
        if (c >= 'a' && c <= 'z')
            letters.insert(c);
    cout << letters.size() << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
