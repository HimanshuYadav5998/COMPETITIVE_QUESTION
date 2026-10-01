#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int r1, r2, r3;
            cin >> r1 >> r2 >> r3;
            if (r1 > r2 + r3 || r2 > r1 + r3 || r3 > r1 + r2) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}