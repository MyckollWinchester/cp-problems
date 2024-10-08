/* DON'T TAKE THIS SOLUTION SERIOUSLY PLEASE :sob: */

/*
* 3SUM
* https://codeforces.com/contest/1692/problem/F
* Sun Oct 06 2024, 16:39:50 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a;
    cin >> n;
    map<int, int> m = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0}, {8, 0}, {9, 0}};
    while (n--) {
        cin >> a;
        m[a%10]++;
    }
    if (   (m[0] >= 2 && m[3] >= 1)
        || (m[0] >= 1 && m[1] >= 1 && m[2] >= 1)
        || (m[1] >= 3)
        || (m[0] >= 1 && m[4] >= 1 && m[9] >= 1)
        || (m[1] >= 1 && m[3] >= 1 && m[9] >= 1)
        || (m[2] >= 2 && m[9] >= 1)
        || (m[0] >= 1 && m[5] >= 1 && m[8] >= 1)
        || (m[1] >= 1 && m[4] >= 1 && m[8] >= 1)
        || (m[2] >= 1 && m[3] >= 1 && m[8] >= 1)
        || (m[0] >= 1 && m[6] >= 1 && m[7] >= 1)
        || (m[1] >= 1 && m[5] >= 1 && m[7] >= 1)
        || (m[2] >= 1 && m[4] >= 1 && m[7] >= 1)
        || (m[3] >= 2 && m[7] >= 1)
        || (m[1] >= 1 && m[6] >= 2)
        || (m[2] >= 1 && m[5] >= 1 && m[6] >= 1)
        || (m[3] >= 1 && m[4] >= 1 && m[6] >= 1)
        || (m[3] >= 1 && m[5] >= 2)
        || (m[4] >= 2 && m[5] >= 1)
        || (m[9] >= 2 && m[5] >= 1)
        || (m[9] >= 1 && m[8] >= 1 && m[6] >= 1)
        || (m[9] >= 1 && m[7] >= 2)
        || (m[8] >= 2 && m[7] >= 1)
    )
        cout << "YES\n";
    else
        cout << "NO\n";
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
