#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;
    int sum = n * x;
    if (sum%4!=0)
    {
      int value = (sum / 4);
      cout << value + 1 << endl;
    }
    else
    {
      int value2 = sum / 4;
      cout << value2<< endl;
    }
  }
  return 0;
}