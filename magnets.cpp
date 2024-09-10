#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int groups = 0;
    string last = "00";
    while (n--) {
        string s;
        cin >> s;
        if (s != last) {
            groups += 1;
            last = s;
        }
    }
    cout << groups << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
