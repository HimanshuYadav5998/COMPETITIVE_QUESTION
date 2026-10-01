#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    if (cin >> a) {
        while (a--) {
            int b, c;
            cin >> b >> c;
            cout << (b / 10) + c << endl;
        }
    }
    return 0;
}