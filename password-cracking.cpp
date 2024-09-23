/*
* Password Cracking
* https://codeforces.com/contest/2013
* Sat Sep 21 2024, 21:24:45 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

bool query(string t) {
    cout << "? " << t << "\n";
    int res;
    cin >> res;
    return res;
}

void solve() {
    int n;
    cin >> n;
    string t = "";
    while (t.length() != n) {
        if (query(t+'0')) {
            t += '0';
            continue;
        } else if (query(t+'1')) {
            t += '1';
            continue;
        }
        break;
    }
    while (t.length() != n) {
        if (query('0'+t)) {
            t = '0' + t;
        } else {
            t = '1' + t;
        }
    }
    cout << "! " << t << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
