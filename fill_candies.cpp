#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, m;
    cin >> n >> k >> m;
    int value1 = k * m;
    if (n%value1==0)
    {
      cout << n / value1 << endl;
    }
    else
    {
      cout << (n / value1) + 1 << endl;
    }
  }
  return 0;
}