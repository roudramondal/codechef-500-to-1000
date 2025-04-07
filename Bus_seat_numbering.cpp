#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (1<=n&&n<=10)
    {
      cout << "Lower Double" << endl;
    }
    else if (11<=n&&n<=15)
    {
      cout << "Lower Single" << endl;
    }
    else if (16<=n&&n<=25)
    {
      cout << "Upper Double" << endl;
    }
    else if (26<=n&&n<=30)
    {
      cout << "Upper Single" << endl;
    }
  }
  return 0;
}