/*
* Test of Love
* https://codeforces.com/contest/1992/problem/D
* Thu Sep 19 2024, 01:00:27 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string a;
    cin >> a;
    a = 'L' + a + 'L';
    int pos = 0;
    bool success = true;
    while (pos < n + 1) {
        if (a[pos] == 'L') {
            string section = a.substr(pos+1, m);
            int l = section.find_last_of('L');
            int w = section.find_last_of('W');
            if (l != -1) {
                pos += l + 1;
            } else if (w != -1) {
                pos += w + 1;
            } else {
                success = false;
                break;
            }
        } else {
            if (a[pos+1] == 'C' || !k) {
                success = false;
                break;
            }
            pos++;
            k--;
        }
    }
    cout << (success ? "YES" : "NO") << "\n";
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
