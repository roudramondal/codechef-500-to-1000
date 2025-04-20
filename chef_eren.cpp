#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, a, b;
    cin >> n >> a >> b;
    int even = 0;
    int odd = 0;
    for (int i = 0; i <n;i++)
    {
     if(i%2==0)
     {
       even++;
     }
     else
     {
       odd++;
     }
    }
    int final_value = even * b + odd * a;
    cout << final_value << endl;
  }
  return 0;
}