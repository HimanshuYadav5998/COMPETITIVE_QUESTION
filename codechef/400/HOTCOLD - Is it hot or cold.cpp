#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    if (cin >> a) {
        while (a--) {
            int b;
            cin >> b;
            if (b > 20) {
                cout << "HOT" << endl;
            } else {
                cout << "COLD" << endl;
            }
        }
    }
    return 0;
}