#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    if (m>=n)
    {
      cout << n << endl;
    }
    else
    {
      cout << 2 * n - m << endl;
    }
  }
  return 0;
}
