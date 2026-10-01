#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x, y;
            cin >> x >> y;
            // Algorithm A has more time complexity than B if X > Y
            if (x > y) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}