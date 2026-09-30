#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int x, y;
    cin >> x >> y;
    
    int total_treats = (n * x) + (m * y);
    cout << total_treats << "\n";
    
    return 0;
}