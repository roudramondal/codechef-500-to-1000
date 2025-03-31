#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;
    int sum = b1 + b2 + b3;
    if (sum==1)
    {
      cout << "Water filling time" << endl;
    }
    else if (sum>1)
    {
      cout << "Not now" << endl;
    }
    else
    {
      cout << "Water filling time" << endl;
    }
  }
  return 0;
}