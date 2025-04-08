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
    int sum = 2 * y;
    if (x<sum)
    {
      cout << "0" << endl;
    }
    else
    {
      int value = x / sum;
      cout << value << endl;
    }
  }
  return 0;
}