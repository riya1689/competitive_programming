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
        int n,k;
        cin >>n>>k;
        vector<int>a(k);
        for(int i=0;i<k;i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(),a.rend());
        int sum =a[0],op=0,i=1;
        while(i<k && (sum+a[i])<=n)
        {
            sum+= a[i];
            op +=(a[i]*2 -1);
            i++;
        }
        cout << op << endl;
        
    }

   return 0;
}