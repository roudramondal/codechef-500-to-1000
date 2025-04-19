#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    int value1 = abs(x1 - y1);
    int value2 = abs(x2 - y2);
    int final_value = max(value1,value2);
    cout << final_value << endl;
  }
  return 0;
}