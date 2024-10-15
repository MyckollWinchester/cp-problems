#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

template <typename T>
void read(T& t) { cin >> t; }
template <typename T, typename... Args>
void read(T& t, Args&... args) { cin >> t; read(args...); }

void solve() {
    int x, y, k;
    read(x, y, k);
    int a = x / k + (x % k > 0);
    int b = y / k + (y % k > 0);
    int ans = 2*max(a, b);
    if (a > b) ans--;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; read(t);
    while (t--)
        solve();
    return 0;
}