/*
* Maximize Mex
* https://codeforces.com/contest/2021/problem/B
* Sun Oct 06 2024, 04:16:09 (UTC-3)
* Myckoll Winchester
*/
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()

typedef long long ll;

template<typename T, typename S> constexpr bool chmin(T &a, const S b){if(a>b) return a=b,true; return false;}
template<typename T, typename S> constexpr bool chmax(T &a, const S b){if(a<b) return a=b,true; return false;}

template<typename T> constexpr T inf=0;
template<> constexpr int inf<int> = 0x3f3f3f3f;
template<> constexpr ll inf<ll> = 0x3f3f3f3f3f3f3f3f;

template<typename T> void print(vector<T> x){for(auto i: x) cout << i << ' ';cout << "\n";}
template<typename T> void print(set<T> x){for(auto i: x) cout << i << ' ';cout << "\n";}
template<typename T> void print(unordered_set<T> x){for(auto i: x) cout << i << ' ';cout << "\n";}
template<typename T> void print(T && x) {cout << x << "\n";}
template<typename T, typename... S> void print(T && x, S&&... y) {cout << x << ' ';print(y...);}

void solve() {
    ll n, x, ai, to;
    cin >> n >> x;
    vector<ll> v(n+1);
    for (ll i = 0; i < n; ++i) {
        cin >> ai;
        if (ai >= n)
            continue;
        v[ai]++;
    }
    ll i = 0;
    for (; i < n; ++i) {
        if ((v[i] && i + x >= n) || v[i] == 1)
            continue;
        if (v[i] == 0)
            break;
        v[i+x] += v[i] - 1;
    }
    cout << i << '\n';
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
