#include <iostream>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x, y;
            cin >> x >> y;
            if (10 * y <= 100 * x) {
                cout << "Cloth\n";
            } else {
                cout << "Disposable\n";
            }
        }
    }
    return 0;
}