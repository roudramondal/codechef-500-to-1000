#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int sum = a * b;
    int sum2 = x * y;
    if (sum<=sum2)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}
