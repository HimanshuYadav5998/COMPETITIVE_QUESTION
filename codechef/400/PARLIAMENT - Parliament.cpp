#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    if (cin >> a) {
        while (a--) {
            int b, c;
            cin >> b >> c;
            if (2 * c >= b) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}