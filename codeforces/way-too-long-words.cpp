#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; cin >> n;
    string ans[n];
    for (int i = 0; i < n; ++i) {
        string w; cin >> w;
        size_t wl = w.length();
        if (wl > 10) ans[i] = w[0] + to_string(wl-2) + w[wl-1];
        else ans[i] = w;
    }
    for (string a : ans) cout << a << "\n";
    return 0;
}
