#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int value1 = a + c;
    int value2 = b + d;
    if (value1==180&&value2==180)
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