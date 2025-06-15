//https://codeforces.com/problemset/problem/1863/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;cin >>t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<char> seen(n+1,0);
        for(int x: a){
            if(x <=n)seen[x] =1;
        }
        int mex =0;
        while(mex <= n&& seen[mex]) mex++;
        vector<int>b(n+1);
        for(int i=0;i<n;i++) b[i] = a[i];
        b[n] = mex;
        long long r = k% (n+1);
        for(int j=0;j<n;j++){
            int idx = j-r;
            if(idx <0) idx += (n+1) * ((idx)/(n+1)+1);
            idx %= (n+1);
            cout <<b[idx] << (j+1 <n ? ' ' : '\n');
        }
    }
   return 0;
}