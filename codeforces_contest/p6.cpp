#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);

using ll = long long;

class prblm6{
public:
    static ll shrink(const vector<ll>& ad  , ll str , ll yas){

        ll utr =0,  ref =0; unordered_map<ll,ll>fr;
        fr.reserve(256);
        fr.max_load_factor(0.7);
        fr[0] = 1;

        for(ll ar :  ad )
        {
            if(ar >  yas){
                ref =0; fr.clear();  fr [0] = 1;
                continue;
            }
            ref += ar; auto it = fr.find(ref - str);
            if(it != fr.end())  utr  += it->second;

            ++fr[ref];
        }
        return utr;
       
    }
};
int main()
{
    fio
    int t;cin>>t;
    while(t--){
        ll n  ,  str  , z; cin >> n >> str >> z;

        vector<ll> ad(n); for(auto & ar : ad)  cin >> ar;
        prblm6 p6soln;
        ll es = p6soln.shrink(ad,str,z) - p6soln.shrink(ad,str,z-1); cout << es <<endl;
    }
   
   return 0;
}