#include <bits/stdc++.h>

using namespace std;

void solve() {
    string hello = "hello";
    string s;
    cin >> s;
    for (int i = 0; char c : s) {
        if (c == hello[i]) {
            i++;
            if (i == 5) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
