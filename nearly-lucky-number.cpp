#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

void solve() {
    string s;
    cin >> s;
    int _4s = count(s.begin(), s.end(), '4');
    int _7s = count(s.begin(), s.end(), '7');
    string count = to_string(_4s + _7s);
    for (char c : count)
        if (c != '4' && c != '7') {
            cout << "NO\n";
            return;
        }
    cout << "YES\n";
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
