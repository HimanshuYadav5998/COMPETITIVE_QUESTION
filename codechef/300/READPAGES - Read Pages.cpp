#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n, x, y;
            cin >> n >> x >> y;
            // Chef can read at most X * Y pages in total
            if (x * y >= n) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}