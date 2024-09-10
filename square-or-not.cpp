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

bool isPerfectSquare(int n) {
    if (n == 0) return true;
    int odd = 1;
    while (n > 0) {
        n -= odd;
        odd += 2;
    }
    return n == 0;
}

void solve() {
    int n; read(n);
    string s; read(s);
    if (!isPerfectSquare(n)) {
        cout << "No\n";
        return;
    }
    int a = (int) sqrt(n);
    if (a == 2) {
        cout << "Yes\n";
        return;
    }
    for (int i = 1; i < a; ++i) {
        if (s[i] != '1') {
            cout << "No\n";
            return;
        }
    }
    if (s[a + 1] == '0' && s[2*a - 2] == '0' && s[a] == '1' && s[2*a - 1] == '1') {
        cout << "Yes\n";
        return;
    }
    cout << "No\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin.precision(4);
    int t; read(t);
    while (t--) solve();
    // solve();
    return 0;
}
