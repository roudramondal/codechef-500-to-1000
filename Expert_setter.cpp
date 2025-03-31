#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        double value = (double)y / x * 100.0;

        if (value >= 50.0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
