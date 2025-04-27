#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        char str[20];  
        int start38_count = 0;
        int ltime108_count = 0;

        for (int i = 0; i < n; i++) {
            cin >> str;

            if (strcmp(str, "START38") == 0)
             {
                start38_count++;
            } 
            else if (strcmp(str, "LTIME108") == 0)
             {
                ltime108_count++;
            }
        }

        cout << start38_count << " " << ltime108_count << endl;
    }

    return 0;
}
