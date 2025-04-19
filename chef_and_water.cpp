#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, x, k;
    cin >> n >> x >> k;
    if (x>k)
    {
      cout << "0" << endl;
    }
    else if (x<k&&(n*x)>k)
    {
      cout << (k / x) << endl;
    }
    else 
    {
      cout << n << endl;
    }
  }
  return 0;
}