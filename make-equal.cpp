#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

template <typename T>
void read(T& t) { cin >> t; }
template <typename T, typename... Args>
void read(T& t, Args&... args) { cin >> t; read(args...); }

void solve() {
    int n; read(n);
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        int ai; read(ai);
        a.push_back(ai);
    }
    partial_sum(a.rbegin(), a.rend(), a.rbegin());
    int s = a[0] / n;
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] > s*(i+1)) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; read(t);
    while (t--) solve();
    // solve();
    return 0;
}
