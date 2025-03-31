#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  int count=0;
 
   while(t--)
   {
     int x, y;
     cin >> x >> y;
     int sum = x * y;
     count = (sum / 100);
     cout << count << endl;
   }
  
  return 0;
}