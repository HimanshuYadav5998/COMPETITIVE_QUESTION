#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    if (cin >> a) {
        while (a--) {
            int b, c, d;
            cin >> b >> c >> d;
            if (b > c && b > d) {
                cout << "Setter" << endl;
            } else if (c > b && c > d) {
                cout << "Tester" << endl;
            } else {
                cout << "Editorialist" << endl;
            }
        }
    }
    return 0;
}