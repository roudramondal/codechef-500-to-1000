#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int value = max(a, b);
    int value2 = max(c, d);
    int sum = value + value2;
    cout << sum << endl;
  }
  return 0;
}