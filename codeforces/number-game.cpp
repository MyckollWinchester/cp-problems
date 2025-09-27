/*
* Number Game
* https://codeforces.com/contest/1370/problem/C
* Sat Sep 27 2025, 01:28:47 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "FastestFinger" << '\n';
        return;
    }

    if (n == 2 || n % 2) {
        cout << "Ashishgup" << '\n';
        return;
    }

    int range = sqrt(n);
    vector<int> divisors;
    for (int i = 1; i <= range; ++i)
        if (n % i == 0)
            divisors.push_back(i);
    
    bool is_perfect_sqr = range * range == n;
    int len = divisors.size();
    for (int i = len - is_perfect_sqr - 1; i >= 0; --i)
        divisors.push_back(n/divisors[i]);
    
    vector<int> odd_divisors;
    for (int d : divisors)
        if (d%2)
            odd_divisors.push_back(d);
    
    if (odd_divisors.size() == 1 || (odd_divisors.size() == 2 && n/odd_divisors[1] == 2)) {
        cout << "FastestFinger" << '\n';
        return;
    }

    cout << "Ashishgup" << '\n';
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
