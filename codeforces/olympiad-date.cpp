/*
* Olympiad Date
* https://codeforces.com/problemset/problem/2091/A
* Mon Apr 21 2025, 22:54:06 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

inline void ignoreline(){string ignore; getline(cin, ignore);}

void solve() {
    int n, a;
    cin >> n;

    vector<int> m = {3, 1, 2, 1, 0, 1};
    // there's 3 zeroes in 01.03.2025.
    // so, m[0] = 3
    // there's 1 one in 01.03.2025.
    // so, m[1] = 1
    // and so on...
    
    bool can_make_date = false;
    int i = 0;
    for (; i < n; ++i) {
        cin >> a;
        if (a != 0 && a != 1 && a != 2 && a != 3 && a != 5)
            continue;
        m[a]--;
        int j = 0;
        for (; j < 6; ++j)
            if (m[j] > 0)
                break;
        if (j == 6) {
            ignoreline();
            can_make_date = true;
            break;
        }
    }
    cout << (can_make_date ? i + 1 : 0) << '\n';
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
