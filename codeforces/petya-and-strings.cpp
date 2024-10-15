#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

template <typename T>
void read(T& t) { cin >> t; }
template <typename T, typename... Args>
void read(T& t, Args&... args) { cin >> t; read(args...); }

inline void s_tolower(string &s) {
    transform(s.begin(), s.end(), s.begin(), [] (uint8_t c) { return tolower(c);} );
}

void solve() {
    string a, b;
    read(a, b);
    s_tolower(a);
    s_tolower(b);
    if (a < b) {
        cout << "-1\n";
    } else if (a > b) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
