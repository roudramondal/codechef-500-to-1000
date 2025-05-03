#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (1<=n&&n<=4)
    {
      cout << "1" << endl;
    }
    else
    {
      int  final_value=ceil((double)n/4);
      
      cout << final_value << endl;
    }
    
  }
  return 0;
}