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
    int n, k; read(n, k);
    vector<string> vs;
    for (int i = 0; i < n/k; ++i) vs.push_back("");
    for (int i = 0; i < n; i+=k) {
        string s; read(s);
        for (int j = 0; j < n; j+=k) vs[i/k] += s[j];
        for (int _ = 0; _ < k; ++_) ignore_line();
    }
    for (string s : vs) cout << s << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; read(t);
    while (t--) solve();
    return 0;
}
