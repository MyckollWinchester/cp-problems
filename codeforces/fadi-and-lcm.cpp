/*
* Fadi and LCM
* https://codeforces.com/contest/1285/problem/C
* Fri Sep 26 2025, 23:46:37 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

bool is_prime(ull n) {
    ull range = sqrt(n);
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i < range; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void solve() {
    ull x;
    cin >> x;

    if (is_prime(x)) {
        cout << "1 " << x << '\n';
        return;
    }

    ull range = sqrt(x);
    vector<ull> divisors;

    for (ull i = 1; i <= range; ++i)
        if (x % i == 0)
            divisors.push_back(i);
    
    int n = divisors.size();
    bool is_perfect_sqr = range * range == x;

    for (int i = n - is_perfect_sqr - 1; i >= 0; --i)
        divisors.push_back(x / divisors[i]);
    
    n = divisors.size();
    ull a = 1, b = x;
    ull min_lcm = x;

    for (int i = 0, j = n-1; i < j; ++i, --j) {
        if (lcm(divisors[i], divisors[j]) == x && max(divisors[i], divisors[j]) < min_lcm) {
            a = divisors[i];
            b = divisors[j];
            min_lcm = max(divisors[i], divisors[j]);
        }
    }
        
    cout << a << ' ' << b << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
