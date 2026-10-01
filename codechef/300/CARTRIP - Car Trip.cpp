#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x;
            cin >> x;
            // Chef pays for at least 300 km at Rs 10 per km
            cout << max(x, 300) * 10 << "\n";
        }
    }
    return 0;
}