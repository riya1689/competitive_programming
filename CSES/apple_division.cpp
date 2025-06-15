//https://cses.fi/problemset/task/1623
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(int idx,ll* arr,ll sum1, ll sum2,ll n){
    if(idx == n){
        return abs(sum1 - sum2);
    }
    ll choose = solve(idx +1,arr,sum1+arr[idx],sum2,n);

    ll notchoose = solve(idx +1,arr,sum1,sum2+arr[idx],n);

    return min(choose,notchoose);
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n;cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin >> arr[i];
    }
    ll ans = solve(0,arr,0,0,n);
    cout <<ans<<endl;


    
   return 0;
}