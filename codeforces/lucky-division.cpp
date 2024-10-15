/*
* Lucky Division
* https://codeforces.com/contest/122/problem/A
* Tue Sep 08 2024, 21:06:14 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

const vector<int> luckyNumbers = { 4, 7, 47, 74, 444, 447, 474, 477, 744, 747, 774, 777 };

void solve() {
    int n;
    cin >> n;
    for (int l : luckyNumbers)
        if (n % l == 0) {
            cout << "YES\n";
            return;
        }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
