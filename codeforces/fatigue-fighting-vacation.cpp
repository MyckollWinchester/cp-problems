#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

template <typename T>
void read(T& t) { cin >> t; }
template <typename T, typename... Args>
void read(T& t, Args&... args) { cin >> t; read(args...); }

void solve() {
    int d, c, r; read(d, c, r);
    vector<int> cr;
    for (int i = 0; i < c; ++i) {
        int ci; read(ci);
        cr.push_back(ci);
    }
    int a = 0;
    for (int i = 0; i < r; ++i) {
        int ri; read(ri);
        d += ri;
        a++;
    }
    for (int i = 0; i < c; ++i) {
        d -= cr[i];
        if (d < 0) break;
        a++; 
    }
    cout << a << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
