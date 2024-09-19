/*
* Chromatic
* https://codeforces.com/gym/104603/problem/C
* Tue Sep 10 2024, 14:15:25 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; ++i) {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }
    for (int i = 0; i < n; ++i) {
        int bi;
        cin >> bi;
        b.push_back(bi);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int max = 1;
    int min = 2000000000;
    for (int i = 0; i < n; ++i) {
        if (a[i] + b[i] > max)
            max = a[i] + b[i];
        if (a[i] + b[i] < min)
            min = a[i] + b[i];
    }
    cout << max - min << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
