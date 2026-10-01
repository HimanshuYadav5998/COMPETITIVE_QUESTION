#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int g, b;
            cin >> g >> b;
            // Each team requires 1 girl and 1 boy.
            // Since B > G, we can form at most G teams.
            // Remaining boys left out = B - G
            cout << b - g << "\n";
        }
    }
    return 0;
}