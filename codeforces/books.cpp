/*
* Books
* https://codeforces.com/contest/279/problem/B
* Tue Oct 15 2024, 13:12:57 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n+1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    partial_sum(a.begin(), a.end(), a.begin());
    int len = 0;
    for (int i = 1; i + len <= n; ++i)
        while (a[i+len] - a[i-1] <= t && i + len <= n)
            len++;
    cout << len << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}