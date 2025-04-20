#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, x, b, y;
    cin >> a >> x >> b >> y;
    double alice1 = (double)a / x;
    double bob1 = (double)b / y;
    if (alice1>bob1)
    {
      cout << "Alice" << endl;
    }
    else if (alice1<bob1)
    {
      cout << "Bob" << endl;
    }
    else
    {
      cout << "Equal" << endl;
    }
  }
  return 0;
}