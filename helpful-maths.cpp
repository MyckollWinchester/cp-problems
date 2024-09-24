/*
* Helpful Maths
* https://codeforces.com/contest/339/problem/A
* Tue Sep 24 2024, 17:07:02 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string s;
    cin >> s;
    vector<int> v;
    for (char c : s)
        if (c != '+')
            v.push_back(c - '0');
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i)
        cout << v[i] << "+\n"[i==v.size()-1];
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
