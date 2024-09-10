#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

void solve() {
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    while (n--) {
        int dx, dy, dz;
        cin >> dx >> dy >> dz;
        x += dx;
        y += dy;
        z += dz;
    }
    cout << (!x && !y && !z ? "YES" : "NO") << "\n";
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
