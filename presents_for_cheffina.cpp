#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N;
        cin >> N; 
        int coins_required = N - (N / 5);
        cout << coins_required << endl;
    }

    return 0;
}
