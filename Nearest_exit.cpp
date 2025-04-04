#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    if (1<=x&&x<=50)
    {
      cout << "LEFT" << endl;
    }
    else
    {
      cout << "RIGHT" << endl;
    }
  }
  return 0;
}