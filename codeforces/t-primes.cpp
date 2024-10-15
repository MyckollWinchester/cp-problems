#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

bool primes[999863] = { 0, 0, 1, 1, 0, 1, 0 };

bool isPrime(ull n) {
    if (primes[n])
        return true;
    
    ull range = sqrt(n);

    if (n % 2 == 0 || n % 3 == 0) 
        return false; 

    for (int i = 5; i <= range; i += 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    
    primes[n] = 1;
    return true;
}

void solve() {
    int n;
    cin >> n;
    while(n--) {
        ull x;
        cin >> x;
        ull sq = sqrt(x);
        if (sq*sq != x || x < 4) {
            cout << "NO\n";
            continue;
        }
        if (isPrime(sq)) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
