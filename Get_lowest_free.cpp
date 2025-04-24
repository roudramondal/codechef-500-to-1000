#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    int value = min({a, b, c});
    int final_value = a + b + c - value;
    cout << final_value << endl;
  }
  return 0;
}