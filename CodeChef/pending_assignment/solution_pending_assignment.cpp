#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t,x,y,z;
   cin >> t;
   while(t--)
   {
    cin >> x >> y >> z;
    if(x*y <= z*24*60) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
   }
   return 0;
}