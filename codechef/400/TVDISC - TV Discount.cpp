#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    if (cin >> a) {
        while (a--) {
            int b, c, d, e;
            cin >> b >> c >> d >> e;
            if (b - d < c - e) {
                cout << "First" << endl;
            } else if (c - e < b - d) {
                cout << "Second" << endl;
            } else {
                cout << "Any" << endl;
            }
        }
    }
    return 0;
}