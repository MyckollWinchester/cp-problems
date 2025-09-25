/*
* 3SUM
* https://codeforces.com/contest/1692/problem/F
* Thu Sep 25 2025, 02:05:34 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // how many times a digit is the last digit of a number
    vector<int> nums(10);
    while (n--) {
        int i;
        cin >> i;
        nums[i%10]++;
    }
    
    // we will use a digit at most 3 times
    for (int &num : nums) num = min(3, num);

    // spread the digits in a vector
    vector<int> a;
    for (int i = 0; i < 10; ++i)
        while (nums[i]--)
            a.push_back(i);
            
    // bruteforce, as there is at most 30 digits in the vector
    // O(n + 30^3)
    n = a.size();
    for (int i = 0; i < n-2; ++i) {
        for (int j = i+1; j < n-1; ++j) {
            for (int k = j+1; k < n; ++k) {
                if ((a[i] + a[j] + a[k]) % 10 == 3) {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }

    cout << "NO\n";
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
