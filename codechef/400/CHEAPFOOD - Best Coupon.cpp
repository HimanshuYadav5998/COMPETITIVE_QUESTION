#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int x;
            cin >> x;
            cout << max(x / 10, 100) << "\n";
        }
    }
    return 0;
}