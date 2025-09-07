/*
* Maximum Even Sum
* https://codeforces.com/contest/2137/problem/C
* Sun Sep 07 2025, 13:25:14 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll a, b;
    cin >> a >> b;

    if (b%2 == 0) {
        if ((a*b/2 + 2)%2 == 1)
            cout << "-1\n";
        else
            cout << a*b/2 + 2 << '\n';
        return;
    }
    
    if ((a*b + 1)%2 == 1)
        cout << "-1\n";
    else
        cout << a*b + 1 << '\n';
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
