#include <bits/stdc++.h>
using namespace std;

#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
inline void next_line() { string ignore; getline(cin, ignore); }

template <typename T>
void read(T& t) { cin >> t; }
template <typename T, typename... Args>
void read(T& t, Args&... args) { cin >> t; read(args...); }

void geibriel(int &a) {
    a++;
}

void solve() {
    string s; read(s);
    set<char> sc(s.begin(), s.end());
    cout << (sc.size() % 2 ? "IGNORE HIM!\n" : "CHAT WITH HER!\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t; read(t);
    // while (t--)
        solve();
    return 0;
}
