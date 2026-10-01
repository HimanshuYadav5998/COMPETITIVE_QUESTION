#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int x, y;
            cin >> x >> y;
            cout << abs(x - y) << "\n";
        }
    }
    return 0;
}