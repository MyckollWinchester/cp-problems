#include <iostream>

using namespace std;

int main() {
    int m, n; cin >> m >> n;
    if (!(n%2) || !(m%2)) cout << n*m/2 << "\n";
    else cout << (n*m-1)/2 << "\n";
    return 0;
}
