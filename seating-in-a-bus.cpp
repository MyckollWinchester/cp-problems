#include <bits/stdc++.h>
using namespace std;

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
    int a1; read(a1);
    int min = a1;
    int max = a1;
    n--;
    while (n--) {
        int a; read(a);
        if (abs(a - min) > 1) {
            if (abs(a - max) > 1) {
                string ignore;
                getline(cin, ignore);
                cout << "NO\n";
                return;
            }
        }
        if (a < min) min = a;
        if (a > max) max = a;
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; read(t);
    while (t--) solve();
    // solve();
    return 0;
}
