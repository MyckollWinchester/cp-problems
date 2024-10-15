#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    int res[t];
    for (int i = 0; i < t; ++i) {
        int n, k; cin >> n >> k;
        if (n > k+1) res[i] = n;
        else res[i] = 1;
    }
    for (int r : res) cout << r << "\n";
    return 0;
}
