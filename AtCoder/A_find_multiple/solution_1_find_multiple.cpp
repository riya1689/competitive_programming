#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c;
   cin >> a >> b >> c;
   int n=1;
   while(c*n <=b)
   {
        if(c*n >= a && c*n <= b )
        {
            int multiple = c*n;
            cout <<multiple << endl; 
            return 0;
        }
        n++;
   }
   if(a<c || b<c)
    {
        cout << -1 <<endl;
    }
    else cout << -1 <<endl;
   return 0;
}