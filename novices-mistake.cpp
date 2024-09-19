/*
* Novice's Mistake
* https://codeforces.com/contest/1992/problem/E
* Thu Sep 19 2024, 02:36:31 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

int cands1[6] = { 1, 11, 111, 1111, 11111, 111111 };
int cands2[6] = { 1, 10, 101, 1010, 10101, 101010 };
int cands3[6] = { 1, 10, 100, 1001, 10010, 100100 };

void solve() {
    int n;
    cin >> n;
    int cand;
    vector<pair<int, int>> res;
    if (n/10 < 1) {
        for (int k : cands1) {
            cand = k*n;
            for (int a = 1; a < 10001; ++a) {
                int b = a*n - cand;
                if (!(b > 0) || !(b < min(10001, n*a)))
                    continue;
                if (a - b == to_string(cand).length()) {
                    res.emplace_back(a, b);
                }
            }
        }
    } else if (n/100 < 1) {
        for (int i = 0; int k : cands2) {
            cand = k*n + i%2 * n/10;
            for (int a = 1; a < 10001; ++a) {
                int b = a*n - cand;
                if (!(b > 0) || !(b < min(10001, n*a)))
                    continue;
                if (2*a - b == to_string(cand).length()) {
                    res.emplace_back(a, b);
                }
            }
            i++;
        }
    } else {
        for (int i = 0; int k : cands3) {
            cand = k*n + (i == 1 || i == 2 || i == 4 || i == 5);
            for (int a = 1; a < 10001; ++a) {
                int b = a*n - cand;
                if (!(b > 0) || !(b < min(10001, n*a)))
                    continue;
                if (3*a - b == to_string(cand).length()) {
                    res.emplace_back(a, b);
                }
            }
            i++;
        }
    }
    cout << res.size() << "\n";
    for (pair<int, int> p : res) {
        cout << p.first << " " << p.second << "\n";
    }
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
