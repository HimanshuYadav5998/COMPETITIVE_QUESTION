#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x, y;
            cin >> x >> y;
            if (y > x) {
                cout << y - x << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
    }
    return 0;
}