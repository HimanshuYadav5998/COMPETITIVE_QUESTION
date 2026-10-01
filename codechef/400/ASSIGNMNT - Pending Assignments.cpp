#include <iostream>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x, y, z;
            cin >> x >> y >> z;
            if (x * y <= z * 24 * 60) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}