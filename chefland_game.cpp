#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int r1, r2, r3, r4;
    cin >> r1 >> r2 >> r3 >> r4;
    int sum = r1 + r2 + r3 + r4;
    if (sum==0)
    {
      cout << "IN" << endl;
    }
    else
    {
      cout << "OUT" << endl;
    }
  }
  return 0;
}