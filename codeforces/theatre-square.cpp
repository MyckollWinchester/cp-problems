#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float n, m, a; cin >> n >> m >> a;
    float ans = ceil(n / a) * ceil(m / a);
    long long ans_ = static_cast<long long>(ans);
    cout << ans_ << "\n";
    return 0;
}
