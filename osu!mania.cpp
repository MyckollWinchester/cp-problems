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
    vector<int> notes;
    while (n--) {
        string s; read(s);
        notes.push_back(find(s.begin(), s.end(), '#') - s.begin() + 1);
    }
    reverse(notes.begin(), notes.end());
    for (int note : notes)
        cout << note << " ";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; read(t);
    while (t--)
        solve();
    return 0;
}
