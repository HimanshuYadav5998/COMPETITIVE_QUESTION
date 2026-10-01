#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            // Cost of style 1 is x1 + y1, style 2 is x2 + y2
            cout << min(x1 + y1, x2 + y2) << "\n";
        }
    }
    return 0;
}