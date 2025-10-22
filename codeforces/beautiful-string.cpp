/*
* Beautiful String
* https://codeforces.com/problemset/problem/2162/B
* Wed Oct 22 2025, 02:27:45 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> ones;
    for (int i = 0; i < n; ++i)
        if (s[i] == '1')
            ones.push_back(i+1);
    cout << ones.size() << '\n';
    for (int i : ones)
        cout << i << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
