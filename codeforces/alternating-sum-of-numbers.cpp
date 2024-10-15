#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    int ans[t];
    for (int i = 0; i < t; ++i) {
        int n; cin >> n;
        ans[i] = 0;
        for (int j = 0; j < n; ++j) {
            int a; cin >> a;
            if (j%2) ans[i] -= a;
            else ans[i] += a;
        }
    }
    for (int a : ans) cout << a << "\n";
    return 0;
}
