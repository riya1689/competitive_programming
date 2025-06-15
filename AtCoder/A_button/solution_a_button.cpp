#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,max_num_coins;
   cin >> a >>b;
   if(a == b)
   {
    max_num_coins =(a*2);
    cout << max_num_coins << endl;
   }
   else if(a>b)
   {
    max_num_coins =(a*2)-1;
    cout<< max_num_coins << endl;
   }
   else
   {
    max_num_coins =(b*2) -1;
    cout << max_num_coins << endl;
   }
   return 0;
}