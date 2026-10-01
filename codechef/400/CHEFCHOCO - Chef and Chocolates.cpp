#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int c, x, y;
            cin >> c >> x >> y;
            cout << (c - x) * y << "\n";
        }
    }
    return 0;
}

