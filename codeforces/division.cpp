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
    if (n <= 1399) {
        cout << "Division 4\n";
    } else if (n <= 1599) {
        cout << "Division 3\n";
    } else if (n <= 1899) {
        cout << "Division 2\n";
    } else {
        cout << "Division 1\n";
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; read(t);
    while (t--) solve();
    return 0;
}
