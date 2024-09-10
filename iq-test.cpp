#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> o, e;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        if (a%2) o.push_back(i+1);
        else e.push_back(i+1);
    }
    o.size() > e.size() ? cout << e[0] << "\n" : cout << o[0] << "\n";
    return 0;
}
