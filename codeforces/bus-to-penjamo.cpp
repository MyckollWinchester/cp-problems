/*
* Bus to Pénjamo
* https://codeforces.com/contest/2022/problem/A
* Sun Oct 13 2024, 16:58:31 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
typedef long long ll;
template<typename T> constexpr T inf=0;
template<> constexpr int inf<int> = 0x3f3f3f3f;
template<> constexpr ll inf<ll> = 0x3f3f3f3f3f3f3f3f;
inline void ignoreline(){string ignore; getline(cin, ignore);}
template<typename T, typename S> constexpr bool chmin(T &a, const S b){if(a>b) return a=b, true; return false;}
template<typename T, typename S> constexpr bool chmax(T &a, const S b){if(a<b) return a=b, true; return false;}
template<typename T> void print(vector<T> v){for (auto e : v) cout << e << ' '; cout << '\n';}

void solve() {
    int n, r;
    cin >> n >> r;
    int alone = 0;
    int happy = 0;
    for (int i = 0; i < n; ++i) {
        int ai;
        cin >> ai;
        alone += ai%2;
        happy += ai - ai%2;
        r -= ai/2;
    }
    int a = alone - r;
    if (a > 0)
        alone -= a * 2;
    cout << happy + alone << '\n';
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
