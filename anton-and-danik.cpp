#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

void solve() {
    next_line();
    string s;
    cin >> s;
    int a = count(s.begin(), s.end(), 'A');
    int d = count(s.begin(), s.end(), 'D');
    if (a == d) {
        cout << "Friendship\n";
        return;
    }
    cout << (a > d ? "Anton" : "Danik") << "\n";
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
