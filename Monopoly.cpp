#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int p, q, r, s;
    cin >> p >> q >> r >> s;
    int max_profit = max({p, q, r, s});
    int total = p + q + r + s;
    if (max_profit>total-max_profit)
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