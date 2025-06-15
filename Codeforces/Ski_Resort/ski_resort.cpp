#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--)
    {
        int n,k,q;
        cin >> n >> k >> q;
        int pd =0, tem [n];
        long long ans =0;
        for(int i=0;i<n;i++)
        {
            cin >> tem[i];
            if(tem[i] <= q) pd++;
            else pd =0;
            ans+=max(0,pd - k +1);
        }
        cout << ans <<endl;
    }
   return 0;
}