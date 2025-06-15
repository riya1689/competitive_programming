//https://codeforces.com/problemset/problem/1870/B
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;cin >>t;
    while(t--){
        int n,m;cin >> n >> m;
        ll origx =0,orB =0;
        vector<ll>a(n),b(m);
        for(int i=0;i<n;i++){
            cin >> a[i];
            origx^= a[i];
        }
        for(int j=0;j<m;j++){
            cin >> b[j];orB|=b[j];
        }
        ll mn,mx;
        if((n&1)==0){
            mn = origx & ~orB;mx = origx;
        }
        else{
            mn = origx; mx=origx | orB;
        }
        cout << mn << " " <<mx <<endl;
    }
    
   return 0;
}