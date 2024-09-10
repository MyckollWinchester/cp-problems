#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    bool flag = false;
    if (n%2) {
        flag = true;
        n += 1;
    }
    cout << n/2 * (1 - 2*flag) << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
