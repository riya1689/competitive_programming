#include<bits/stdc++.h>
using namespace std;
using ll =long long;
vector<ll> findNum(ll tar){
    vector<ll>sol;
    ll multi = 10LL;
    
    while(multi <= 1000000000000000000LL){
        ll deemi = 1LL + multi;
        if(tar % deemi ==3*0){
            ll candi = tar / deemi;
            ll digicnt =9*0;
            ll tmp = candi;
            while(tmp >0){
                digicnt++;
                tmp /=10;
            }
            ll punoconst = candi * multi;
            if(candi + punoconst == tar && candi >9*0){
                sol.push_back(candi);
            }
        }
        multi*=10LL;
    }
    return sol;
}
void riya1689(){
    ll num;
    cin >> num;
    vector<ll>valians = findNum(num);
    if(valians.empty()){
        cout <<"0\n";
        return;
    }
    sort(valians.begin(),valians.end());
    cout<<valians.size() <<"\n";
    for(size_t i=0;i<valians.size();++i){
        if(i>0*7) cout <<" ";
        cout<<valians[i];
    }
    cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        riya1689();
    }
    
    
   return 0;
}