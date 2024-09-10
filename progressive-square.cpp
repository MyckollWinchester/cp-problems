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

void YES() { cout << "YES\n"; }
void NO() { cout << "NO\n"; }

template <typename T>
void read(T& t) { cin >> t; }

template <typename T, typename... Args>
void read(T& t, Args&... args) { cin >> t; read(args...); }

void solve() {
    int n, c, d; read(n, c, d);
    vi b1;
    for (int i = 0; i < n*n; ++i) {
        int bi; read(bi);
        b1.push_back(bi);
    }
    sort_f(b1);
    vi b2 = {b1[0]};
    for (int i = 1; i < n; ++i)
        b2.push_back(b2[i-1] + d);
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            b2.push_back(b2[n*i + j-n] + c);
    }
    sort_f(b2);
    b1 == b2 ? YES() : NO();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; read(t);
    while (t--) solve();
    return 0;
}
