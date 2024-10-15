#include <iostream>
#include <string>

using namespace std;

int main() {
    int t; cin >> t;
    string ans[t];
    for (int i = 0; i < t; ++i) {
        int n; cin >> n;
        int as[n], bs[n];
        ans[i] = "Bob";
        for (int j = 0; j < n; ++j) cin >> as[j];
        for (int j = 0; j < n; ++j) cin >> bs[j];
        int x = 0; int y = n-1;
        for (int j = 0; j < n; ++j) {
            if ((as[j] != bs[x] && as[j] != bs[y]) || (as[n-1] != bs[x] && as[n-1] != bs[y])) {
                ans[i] = "Alice";
                break;
            }
            if (as[j] == bs[x]) x++;
            else y--;
        }
    }
    for (string a : ans) cout << a << "\n";
    return 0;
}
