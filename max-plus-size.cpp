/*
* Max Plus Size
* https://codeforces.com/contest/2019/problem/A
* Fri Sep 27 2024, 10:46:35 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

template<typename T, typename S> constexpr bool chmax(T &a, const S b){if(a<b) return a=b,true; return false;}

void solve() {
    int n;
    cin >> n;
    int maxEven, maxOdd;
    maxEven = maxOdd = 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; i += 2)
        chmax(maxEven, a[i]);
    for (int i = 1; i < n; i += 2)
        chmax(maxOdd, a[i]);
    if (maxEven >= maxOdd) {
        cout << maxEven + n/2 + n%2 << '\n';
    } else {
        cout << maxOdd + n/2 << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
