#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

void solve() {
    int y;
    cin >> y;
    int x = y+1;
    while (true) {
        string xc = to_string(x);
        set<char> cand(xc.begin(), xc.end());
        if (xc.length() == cand.size()) break;
        x++;
    }
    cout << x << "\n";
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
