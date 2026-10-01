#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n, x, k;
            cin >> n >> x >> k;
            // Total cost for N friends buying 1 burger each at cost X is N * X
            if (n * x <= k) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}