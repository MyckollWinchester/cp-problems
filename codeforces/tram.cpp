#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

void solve() {
    int n;
    cin >> n;
    int max = 0;
    int curr = 0;
    while (n--) {
        int a, b;
        cin >> a >> b;
        curr += b - a;
        if (curr > max)
            max = curr;
    }
    cout << max << "\n";
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
