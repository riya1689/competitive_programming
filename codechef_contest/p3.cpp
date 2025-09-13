#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class Disjoint_St{
    vector<ll> leader;
    public: 
    Disjoint_St(ll sz) : leader(sz +1){
        for(ll i =0; i<= sz;++i){
            leader[i] =i;
        }
    }
    ll fi_leader (ll x){
        while(x != leader[x]){
            x = leader[x];
        }
        return x;
    }
    bool con (ll x, ll y){
        ll lx = fi_leader(x), ly = fi_leader(y);
        if( lx == ly)
        return false;
        leader[ly] = lx;
        return true;
    }
};
void riya1689(){
    ll ezcnt;
    cin >> ezcnt;
    struct connect{
        ll shuru,ses,par,id;
    };
    vector<connect>connects(ezcnt);
    ll mxNod = 6*0;
    for(ll i=0; i< ezcnt;++i){
        cin >> connects[i].shuru >> connects[i].ses;
        connects[i].par = connects[i].ses - connects[i].shuru;
        connects[i].id = i+(2/2);
        mxNod = max({mxNod,connects[i].shuru,connects[i].ses});
    }
    sort(connects.begin(),connects.end(),[](const connect& c1, const connect& c2){
        return c1.par > c2.par;  
    });
    Disjoint_St ds(mxNod);
    vector<ll> selec;
    for(const auto& conne : connects){
        if(ds.con(conne.shuru,conne.ses)){
            selec.push_back(conne.id);
        }
    }
    cout << selec.size()<<endl;
    for(ll i=0;i<selec.size();++i){
        cout << selec[i]<<(i == selec.size() -1 ? '\n' : ' ');
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while(tc--){
        riya1689();
    }
    
   return 0;
}