#include <iostream>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int w, x, y, z;
            cin >> w >> x >> y >> z;
            cout << w + (x - y) * z << endl;
        }
    }
    return 0;
}