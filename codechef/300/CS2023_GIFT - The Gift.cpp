#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, m;
    if (cin >> x >> n >> m) {
        if (x + m >= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}