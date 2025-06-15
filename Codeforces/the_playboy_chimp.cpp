#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n;cin >> n;
    vector<long long>h(n);
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    int q; cin >> q;
    while(q--){
        long long x;cin >>x;
        auto lo_it=lower_bound(h.begin(),h.end(),x);
        if(lo_it == h.begin()){
            cout <<'X';
        }else{
            cout <<*(lo_it -1);
        }
        cout <<' ';
        auto hi_it = upper_bound(h.begin(),h.end(),x);
        if(hi_it == h.end()){
            cout <<'X';
        }else{
            cout<<*hi_it;
        }
        cout <<endl;
    }
   return 0;
}