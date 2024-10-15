#include <iostream>
#include <string>

using namespace std;

int main() {
    int t; cin >> t;
    string ans[t];
    for (int i = 0; i < t; ++i) {
        int n; cin >> n;
        if (n > 2) {
            int _;
            for (int j = 0; j < n; ++j) cin >> _;
            ans[i] = "NO";  
        } 
        else {
            int x, y; cin >> x >> y;
            if (abs(x - y) == 1) ans[i] = "NO";
            else ans[i] = "YES";
        }
    }
    for (string a : ans) cout << a << "\n";
    return 0;
}
