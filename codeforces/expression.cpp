/*
* Expression
* https://codeforces.com/problemset/problem/479/A
* Wed Sep 25 2024, 19:35:28 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

template<typename T, typename S> constexpr bool chmax(T &a, const S b){if(a<b) return a=b,true; return false;}

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int m = a+b+c;
    chmax(m, (a+b)*c);
    chmax(m, a*(b+c));
    chmax(m, a*b*c);
    cout << m << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
