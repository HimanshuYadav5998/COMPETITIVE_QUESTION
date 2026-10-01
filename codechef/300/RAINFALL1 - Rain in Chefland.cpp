#include <iostream>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int x;
            cin >> x;
            if (x < 3) {
                cout << "LIGHT\n";
            } else if (x < 7) {
                cout << "MODERATE\n";
            } else {
                cout << "HEAVY\n";
            }
        }
    }
    return 0;
}
