#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    int sum1 = x + y;
    int final1 = (500 - (x * 2)) + (1000 - ((x + y)*4));
    int final2 = (1000 - (y * 4)) + (500 - ((x + y) * 2));
    if (final1>=final2)
    {
      cout << final1 << endl;
    }
    else
    {
      cout << final2 << endl;
    }
  }
  return 0;
}