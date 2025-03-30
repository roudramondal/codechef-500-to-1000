#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  int x[t];
  for (int i = 0; i < t;i++)
  {
    cin >> x[i];
  }
  for (int i = 0; i < t;i++)
  {
    if (10-x[i]>=3)
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