#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y, z;
    cin >> x >> y >> z;
    if (x<=3)
    {
      cout << x * y << endl;
    }
    
    else if(x%3==0)
    {
      int sum = x * y;
      int sum2 = x / 3;
      int sum3 = sum2 - 1;
      int sum4 = sum3 * z;
      int final_value = sum4 + sum;
      cout << final_value << endl;
    }
    else if (x>3)
    {
      int value = x * y;
      int value2 = (x/3);
      int value3 = value2 * z;
      int last_value = value3 + value;
      cout << last_value << endl;
    }
    
  }
  return 0;
}