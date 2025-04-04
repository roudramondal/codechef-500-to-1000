#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int sum = a + b + c;
  if (sum%x==0)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  return 0;
}