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
        long long n,health;
        cin >> n>> health;
        long long bd1 =0, bd2=0;
        for(long long i=0;i<n;i++)
        {
            int s,d;
            cin >> s >> d;
            if(s==1) bd1 = max(bd1,(long long)d);
            else bd2 = max(bd2 ,(long long)d);
        }
        long long rs= LLONG_MAX;
        if(bd1 > 0){
            rs = min(rs,(health + bd1 -1)/bd1);

        }
        if(bd2 >0){
            rs = min(rs,2*((health+bd2 -1)/bd2));
        }
        if(bd1 > 0 && bd2 >0){
            long long rm = health - bd1;
            if (rm <=0) rs = min(rs ,1LL);
            else rs =min(rs,1+2*((rm+bd2 -1)/bd2));
        }
        if(bd1 > 0 && bd2 >0){
            long long rm = health - bd2;
            if(rm <=0) rs = min(rs,2LL);
            else rs = min(rs,2+(rm+bd1 -1)/bd1);

        }
        cout <<rs <<endl;

    }
   return 0;
}