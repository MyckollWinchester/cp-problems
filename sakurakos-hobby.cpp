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

vi p;
string s;
map<int, int> res;

void F(int i) {
    set<int> reached;
    reached.insert(i);
    while (reached.find(p[i-1]) == reached.end()) {
        reached.insert(p[i-1]);
        i = p[i-1];
    }
    int count = 0;
    for (int e : reached) {
        if (s[e-1] == '0') count++;
    }
    for (int e : reached) {
        if (p[e-1] != e) {
            res[e] = count;
        } else { 
            res[e] = s[e-1] == '0';
        }
    }
}

void solve() {
    int n; read(n);
    p.clear();
    res.clear();
    for (int i = 0; i < n; ++i) {
        int pi; read(pi);
        p.push_back(pi);
    }
    read(s);
    for (int i = 1; i <= n; ++i) {
        if (res.find(p[i-1]) != res.end()) continue;
        F(i);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; read(t);
    while (t--) {
        solve();
        for (auto &k : res) {
            cout << k.second << " ";
        }
        cout << "\n";
    }
    // solve();
    return 0;
}
