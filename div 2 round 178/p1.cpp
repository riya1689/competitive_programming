#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int ttl = a+ b + c;
        if(ttl % 3 !=0){
            cout<<"NO"<<endl;
            continue;
        }
        int z = ttl / 3;
        if(z >= b && z<= c)
        {
            cout <<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
   return 0;
}