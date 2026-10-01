#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x, y;
            cin >> x >> y;
            // 3 double rooms cost 3 * X, 2 triple rooms cost 2 * Y
            cout << min(3 * x, 2 * y) << "\n";
        }
    }
    return 0;
}