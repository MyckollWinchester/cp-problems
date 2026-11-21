/*
* Faucets and Drains
* https://atcoder.jp/contests/abc485/tasks/abc485_b
* Sat Nov 21 2026, 09:33:02 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, M;
    cin >> N >> M;

    string S; cin >> S;
    if (S[0] == 'x' && S[1] == 'x') {
        cout << "Faucet 1\n";
        return;
    }

    if (find(S.begin(), S.end(), 'x') != S.end()) {
        cout << "Drain " << S.find('x')+1 << '\n';
        return;
    }
    
    int i = 2;
    while (cin >> S) {
        if (S[0] == 'x') {
            cout << "Faucet " << i << '\n';
            return;
        }
        i++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
