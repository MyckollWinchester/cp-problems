/*
* Fibonacci Reversed
* https://atcoder.jp/contests/abc421/tasks/abc421_b
* Sat Aug 30 2025, 08:14:43 (UTC-4)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    vector<ll> fib(10);
    cin >> fib[0] >> fib[1];
    for (int i = 2; i < 10; ++i) {
        ll sum = fib[i-2] + fib[i-1];
        string num_str = to_string(sum);
        reverse(num_str.begin(), num_str.end());
        fib[i] = stoll(num_str);
    }
    cout << fib[9] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
