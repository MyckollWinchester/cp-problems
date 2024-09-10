#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; cin >> t;
    int ans[t];
    for (int i = 0; i < t; ++i) {
        int n, k; cin >> n >> k;
        vector<int> a;
        for (int j = 0; j < n; ++j) {
            int ai; cin >> ai;
            a.push_back(ai);
        }
        sort(a.begin(), a.end(), greater<int>());
        int sa = 0; int sb = 0;
        for (size_t j = 1; j < a.size(); j += 2) {
            sa += a[j-1];
            sb += min(a[j-1], a[j]+k);
            k = max(0, k - (a[j-1] - a[j]));
        }
        if ((int) a.size() % 2) sa += a[a.size()-1];
        ans[i] = sa - sb;
    }
    for (int a : ans) cout << a << "\n";
    return 0;
}
