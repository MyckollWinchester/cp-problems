#include <bits/stdc++.h>
using namespace std;

#define ignore_line() { string ignore; getline(cin, ignore); }
#define debug_vec(vec) cout << #vec << ": { "; for (auto v : vec) cout << v << " "; cout << "}  size: " << vec.size() << "\n";
#define sort_f(vec) sort(vec.begin(), vec.end());
#define sort_b(vec) sort(vec.rbegin(), vec.rend());
#define cumsum(vec) partial_sum(vec.begin(), vec.end(), vec.begin());

typedef long long ll;
typedef pair<int, int> pi;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;

template <typename T>
void read(T& t) { cin >> t; }

template <typename T, typename... Args>
void read(T& t, Args&... args) { cin >> t; read(args...); }

void solve() {
    int n; read(n);
    vi a;
    for (int i = 0; i < n; ++i) {
        int ai; read(ai);
        a.push_back(ai);
    }
    int m; read(m);
    while (m--) {
        string s; read(s);
        if (s.length() != a.size()) {
            cout << "NO\n";
            continue;
        }
        map<char, int> sm;
        map<int, char> im;
        bool f = false;
        for (int i = 0; i < n; ++i) {
            if (sm.find(s[i]) == sm.end()) {
                sm[s[i]] = a[i];
            } else if (sm[s[i]] != a[i]) {
                cout << "NO\n";
                f = true;
                break;
            }
            if (im.find(a[i]) == im.end()) {
                im[a[i]] = s[i];
            } else if (im[a[i]] != s[i]) {
                cout << "NO\n";
                f = true;
                break;
            }
        }
        if (f) continue;
        cout << "YES\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; read(t);
    while (t--) solve();
    // solve();
    return 0;
}
