/*
* Find Permutation 2
* https://atcoder.jp/contests/abc425/tasks/abc425_b
* Sat Sep 27 2025, 09:24:34 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int,int> cnt;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] != -1) cnt[a[i]]++;
    }

    for (auto m : cnt) {
        if (m.first != -1 && m.second > 1) {
            cout << "No\n";
            return;
        }
    }

    vector<int> p(n);
    vector<bool> used(n+1);

    for (int i = 0; i < n; ++i) {
        if (a[i] != -1) {
            p[i] = a[i];
            used[a[i]] = true;
        }
    }

    vector<int> unused;
    for (int x = 1; x <= n; ++x)
        if (!used[x]) unused.push_back(x);

    int idx = 0;
    for (int i = 0; i < n; ++i)
        if (p[i] == 0)
            p[i] = unused[idx++];

    cout << "Yes\n";
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << p[i];
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
