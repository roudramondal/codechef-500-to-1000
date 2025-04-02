#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N, X;
        cin >> N >> X;

        if (X >= N) {
            cout << 0 << endl;  
        } else {
            long long needed = N - X;
            long long packets = (needed + 3) / 4;
            cout << packets << endl;
        }
    }
    return 0;
}
