/*
* New Year and Hurry
* https://codeforces.com/problemset/problem/750/A
* Fri Dec 20 2024, 23:36:32 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int time_to_solve = 240 - k;
    int solved_problems = 0;
    while (time_to_solve > 0) {
        time_to_solve -= 5 * ++solved_problems;
    }
    solved_problems -= time_to_solve < 0;
    cout << min(solved_problems, n) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
