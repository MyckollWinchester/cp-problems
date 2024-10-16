/*
* Long Queue
* https://www.codechef.com/problems/LONGQUEUE
* Wed Oct 16 2024, 12:27:53 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, w;
    cin >> n;
    int arr[n-1];
    for (int i = n-2; i >= 0; --i)
        cin >> arr[i];
    cin >> w;
    for (int a : arr) {
        if (a > w/2)
            break;
        n--;
    }
    cout << n << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

