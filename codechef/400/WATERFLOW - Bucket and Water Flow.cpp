#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int w, x, y, z;
            cin >> w >> x >> y >> z;

            int total = w + (y * z);

            if (total > x) {
                cout << "overflow\n";
            } else if (total == x) {
                cout << "filled\n";
            } else {
                cout << "unfilled\n";
            }
        }
    }
    return 0;
}