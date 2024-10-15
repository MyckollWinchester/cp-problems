#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

void solve() {
    string s;
    cin >> s;
    int l = 0, u = 0;
    for (char c : s)
        if (c <= 'Z') u++;
        else l++;
    if (u > l)
        transform(s.begin(), s.end(), s.begin(), [] (char c) { return toupper(c); });
    else
        transform(s.begin(), s.end(), s.begin(), [] (char c) { return tolower(c); });
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
