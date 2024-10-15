#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
typedef unsigned long long int ll;

int main() {
    int t; cin >> t;
    ll ans[t];
    for (int i = 0; i < t; ++i) {
        int n; cin >> n;
        ll aj[n];
        for (int j = 0; j < n; ++j) cin >> aj[j];
        string s; cin >> s;
        int l = (int) s.find_first_of('L');
        int r = (int) s.find_last_of('R');
        ans[i] = 0;
        if (l == -1 || r == -1 || r < l) continue;
        vector<int> ls = {(int) l};
        vector<int> rs = {(int) r};
        while (++l < r) {
            if (s[l] != 'L') continue;
            while (--r > l) {
                if (s[r] != 'R') continue;
                ls.push_back(l);
                rs.push_back(r);
                break;
            }
        }
        sort(ls.begin(), ls.end(), greater<int>());
        l = ls.back();
        int c = 0;
        for (;l <= (int) rs.back(); ++l) {
            if (l == (int) ls.back()) {
                ++c;
                ls.pop_back();
            }
            ans[i] += aj[l] * c;
        }
        rs.pop_back();
        --c;
        for (;l <= (int) rs.front(); ++l) {
            ans[i] += aj[l] * c;
            if (l == (int) rs.back()) {
                --c;
                rs.pop_back();
            }
        }
    }
    for (auto a : ans) cout << a << "\n";
    return 0;
}
