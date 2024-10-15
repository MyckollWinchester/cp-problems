/*
* All Pairs Segments
* https://codeforces.com/contest/2019/problem/B
* Fri Sep 27 2024, 11:59:00 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    ll n, q, prev, x, currVal, diff, k;
    cin >> n >> q;
    currVal = n-1;
    cin >> prev;
    cin >> x;
    diff = x - prev;
    prev = x;
    map<ll, ll> points = {{currVal, diff+1}};
    for (int i = 2; i < n; ++i) {
        cin >> x;
        diff = x - prev - 1;
        currVal = currVal + (n - i);
        points[currVal]++;
        currVal -= (i - 1);
        points[currVal] += diff;
        prev = x;
    }
    while (q--) {
        cin >> k;
        if (points.find(k) != points.end())
            cout << points[k];
        else
            cout << 0;
        cout << ' ';
    }
    cout << '\n';
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
