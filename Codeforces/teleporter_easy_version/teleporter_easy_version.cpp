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
        int n;
        cin >> n;
        long long c;
        cin >>c;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
            a[i] +=(i+1);
        }
        sort(a.begin(),a.end());
        int ans =0;
        long long sum =0;
        for(int i=0;i<n;i++){
            if(sum +a[i]>c) break;
            sum += a[i];
            ans++;
        }
        cout << ans << endl;
    }
    
   return 0;
}