#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

template <typename T>
void read(T& t) { cin >> t; }

template <typename T, typename... Args>
void read(T& t, Args&... args) { cin >> t; read(args...); }

void solve() {
    int n, k; read(n, k);
    vi a;
    while (n--) {
        int ai; read(ai);
        a.push_back(ai);
    }
    while (a[--k] == 0 && k);
    if (a[k] == 0) {
        cout << "0\n";
        return;
    }
    auto it = find(a.rbegin(), a.rend(), a[k]);
    int res = -1; 
    if (it != a.rend()) { 
        res = (int) (a.rend() - it - 1); 
    } 
    cout << res + 1 << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
