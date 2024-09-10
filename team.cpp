#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int x, y, z; cin >> x >> y >> z;
        if (x + y + z >= 2) ans += 1;
    }
    cout << ans << "\n";
    return 0;
}
