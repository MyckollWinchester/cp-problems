/*
* Simple Repetition
* https://codeforces.com/problemset/problem/2093/C
* Mon Apr 21 2025, 22:37:52 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    int range = sqrt(n);
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i <= range; i += 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true;
}
 
void solve() {
    int x, k;
    cin >> x >> k;
    if (x == 1 && k == 2) {
        cout << "YES\n";
        return;
    }
    if (k != 1) {
        cout << "NO\n";
        return;
    }
    cout << (isPrime(x) ? "YES" : "NO") << '\n';
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
