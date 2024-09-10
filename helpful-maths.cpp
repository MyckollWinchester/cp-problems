#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

template <typename T>
void read(T& t) { cin >> t; }
template <typename T, typename... Args>
void read(T& t, Args&... args) { cin >> t; read(args...); }

void solve() {
    string s; read(s);
    int _1 = count(s.begin(), s.end(), '1');
    int _2 = count(s.begin(), s.end(), '2');
    int _3 = count(s.begin(), s.end(), '3');
    string s2 = "";
    for (int i = 0; i < _1; ++i) s2 += "1+";
    for (int i = 0; i < _2; ++i) s2 += "2+";
    for (int i = 0; i < _3; ++i) s2 += "3+";
    s2[s2.size()-1] = '\n';
    cout << s2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t; read(t);
    // while (--t)
        solve();
    return 0;
}
