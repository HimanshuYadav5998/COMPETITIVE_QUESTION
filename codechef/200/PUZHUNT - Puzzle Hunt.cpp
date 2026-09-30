#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool eligible = false;
    for (int i = 6; i <= 8; i++) {
        if (n == i) {
            eligible = true;
            break;
        }
    }

    if (eligible) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}