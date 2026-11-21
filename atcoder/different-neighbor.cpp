/*
* Different Neighbor
* https://atcoder.jp/contests/abc485/tasks/abc485_c
* Sat Nov 21 2026, 10:08:47 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N; cin >> N;
    int C[N], ans[N]{};
    for (int i = 0; i < N; ++i) cin >> C[i];

    // forwards
    int prev = C[0];
    int i;
    for (i = 0; i < N; ++i) {
        if (C[i] != prev) break;
        ans[i] = N+1;
    }
    
    int curr = 1;
    for (; i < N; ++i) {
        if (C[i] != prev) {
            prev = C[i];
            curr = 1;
            ans[i] = curr;
        } else {
            ans[i] = ++curr;
        }
    }

    // backwards
    prev = C[N-1];
    int j;
    for (j = N-1; i >= 0; --j)
        if (C[j] != prev) break;

    curr = 1;
    for (; j >= 0; --j) {
        if (C[j] != prev) {
            curr = 1;
            prev = C[j];
            ans[j] = curr < ans[j] ? curr : ans[j];
        } else {
            ans[j] = ++curr < ans[j] ? curr : ans[j];
        }
    }

    for (auto n : ans)
        cout << n << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
