//https://cses.fi/problemset/task/1662
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n;cin >> n;vector<ll> freq(n,0);
    ll ans = 0;
    int rem = 0;
    freq[0] =1;
    for(int i=0;i<n;i++){
        ll a; cin >>a;
        rem=(rem + a)%n;
        if(rem < 0) rem+=n;
        ans += freq[rem];
        freq[rem]++;
    }
    cout << ans <<endl;

   return 0;
}