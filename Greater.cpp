#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
  int a, b, c;
  cin >> a >> b >> c;
  double sum = ((double)(a + b) / 2.0);
  if (sum>c)
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