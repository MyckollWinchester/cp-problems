/*
* Almost Prime
* https://codeforces.com/problemset/problem/26/A
* Tue Oct 02 2025, 11:40:32 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

constexpr bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3 || n == 5) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

constexpr auto compute_primes() {
    array<int, 239> arr{};
    int idx = 0;
    for (int i = 2; i < 1500; i++)
        if (is_prime(i))
            arr[idx++] = i;
    return arr;
}

constexpr auto primes = compute_primes();

void solve() {
    int n;
    cin >> n;

    int ans = 0;

    for (int i = 6; i <= n; ++i) {
        int count = 0;
        for (int p : primes) {
            if (2*p > i || count > 2) break;
            if (i % p == 0) count++;
        }
        if (count == 2) ans++;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
