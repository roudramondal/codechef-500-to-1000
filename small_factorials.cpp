#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int result[10000];
        result[0] = 1;
        int result_size = 1;

        for (int x = 2; x <= n; x++) {
            int carry = 0;
            for (int i = 0; i < result_size; i++) {
                int prod = result[i] * x + carry;
                result[i] = prod % 10;
                carry = prod / 10;
            }
            while (carry) {
                result[result_size] = carry % 10;
                carry /= 10;
                result_size++;
            }
        }
        for (int i = result_size - 1; i >= 0; i--) {
            cout << result[i];
        }
        cout << endl;
    }

    return 0;
}
