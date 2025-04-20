#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, n;
    cin >> x >> n;
    if ((x*100)>n)
    {
      cout << "0" << endl;
    }
    else
    {
    int value = n - x * 100;
    // cout << value << endl;
    double value1 = ceill(double(value) / 100);
    cout << value1 << endl;
    }
  }
  return 0;
}