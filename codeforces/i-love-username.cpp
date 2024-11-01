/*
* I_love_\%username\%
* https://codeforces.com/problemset/problem/155/A
* Fri Nov 01 2024, 12:56:26 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

template<typename T, typename S> constexpr bool chmin(T &a, const S b){if(a>b) return a=b, true; return false;}
template<typename T, typename S> constexpr bool chmax(T &a, const S b){if(a<b) return a=b, true; return false;}

void solve() {
    int n, x, mn, mx, ans = 0;
    cin >> n >> mn;
    mx = mn;
    while (--n && cin >> x)
        if (chmin(mn, x) || chmax(mx, x))
            ans++;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
