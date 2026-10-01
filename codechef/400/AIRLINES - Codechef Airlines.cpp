#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x, y, z;
            cin >> x >> y >> z;
            int total_seats = 10 * x;
            int booked = min(total_seats, y);
            cout << booked * z << "\n";
        }
    }
    return 0;
}