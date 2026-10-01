#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n, m, x;
            cin >> n >> m >> x;
            // Perimeter of rectangular plate is 2 * (N + M)
            // Total cost = Perimeter * X
            cout << 2 * (n + m) * x << "\n";
        }
    }
    return 0;
}