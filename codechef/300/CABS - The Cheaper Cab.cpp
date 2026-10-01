#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    if (cin >> a) {
        while (a--) {
            int b, c;
            cin >> b >> c;
            if (b < c) {
                cout << "FIRST" << endl;
            } else if (c < b) {
                cout << "SECOND" << endl;
            } else {
                cout << "ANY" << endl;
            }
        }
    }
    return 0;
}