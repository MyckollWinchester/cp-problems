#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    int ans[t];
    for (int i = 0; i < t; ++i) {
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        int maxL = max(l, L);
        int minR = min(r, R); 
        if (maxL > minR) {
            ans[i] = 1;
            continue;
        }
        ans[i] = minR - maxL;
        if (l-L) ++ans[i];
        if (r-R) ++ans[i];
    }
    for (int a : ans) cout << a << "\n";
    return 0;
}
