#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t,n,d;
   cin >> t;
   while(t--)
   {
    cin >> n;
    if(n==1)cout<<0<<endl;
    else{
    d = ((n-2)/7 ) + 1;
    cout << d << endl;
    }
 }
   return 0;
}