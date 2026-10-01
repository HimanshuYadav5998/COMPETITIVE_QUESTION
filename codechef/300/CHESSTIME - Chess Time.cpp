#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            // 1 hour = 60 minutes.
            // Each game takes 20 minutes, so Chef plays (60 / 20) = 3 games per hour.
            cout << n * 3 << "\n";
        }
    }
    return 0;
}