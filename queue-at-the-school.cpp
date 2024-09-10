#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    n = s.find_last_of('G') + 1;
    while (t--) {
        for (int i = 1; i < n; ++i) {
            if (s[i] == 'G' && s[i-1] == 'B') {
                s[i] = 'X';
                s[i-1] = 'G';
            }
        }
        replace(s.begin(), s.end(), 'X', 'B');
    }
    cout << s << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t;
    // cin >> t;
    // while (t--)
        solve();
    return 0;
}
