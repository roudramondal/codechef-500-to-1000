#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, a, b;
    cin >> x >> a >> b;
    int sum = a * 1 + b * 2;
    if (x<=sum)
    {
      cout << "Qualify" << endl;
    }
    else
    {
      cout << "NotQualify" << endl;
    }
  }
  return 0;
}