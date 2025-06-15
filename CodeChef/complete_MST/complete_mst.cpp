#include<bits/stdc++.h>
using namespace std;
long long maxk(long long n,long long m){
    long long start =1,end = n-1;
    long long bk =0;
    while(start <= end){
        long long k = (start + end)/2;
        long long val = k* (n-1) - (k*(k-1)) / 2;
        if(val <= m){
            bk = k;
            start =k + 1;
        }else{
            end = k-1;
        }
    }
    return bk;
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        long long mnk = max(0LL,n-1-((n*(n-1))/2-m));
        long long mk = maxk(n,m);
        long long ans = (mk * (mk + 1)) / 2;
        if(mnk >= 0){
            ans -= (mnk *(mnk -1)) / 2;
        }
        cout << ans << endl;
    }
   return 0;
}