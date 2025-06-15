//https://codeforces.com/problemset/problem/706/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n;cin >> n;
    vector<int>prices(n);
    for(int i=0;i<n;++i){
        cin >> prices[i];
    }
    sort(prices.begin(),prices.end());
    int q;cin >>q;
    while(q--){
        int coins;cin >> coins;
        int count = upper_bound(prices.begin(),prices.end(),coins) - prices.begin();
        cout << count <<endl;
    }
   return 0;
}