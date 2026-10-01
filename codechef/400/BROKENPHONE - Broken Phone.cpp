#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    if (cin >> a) {
        while (a--) {
            int b, c;
            cin >> b >> c;
            if (b < c) {
                cout << "REPAIR" << endl;
            } else if (c < b) {
                cout << "NEW PHONE" << endl;
            } else {
                cout << "ANY" << endl;
            }
        }
    }
    return 0;
}