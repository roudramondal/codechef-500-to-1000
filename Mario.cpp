#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int X;
        cin >> X;

        int state = X % 3;

        if (state == 0) {
            cout << "NORMAL" << endl;
        } else if (state == 1) {
            cout << "HUGE" << endl;
        } else {
            cout << "SMALL" << endl;
        }
    }

  return 0;
}
