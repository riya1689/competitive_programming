#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll = long long;


class prblm4{
public:
    void retaliation(){
        
        int n, k;  cin >> n >> k;
        
        vector<long long>poc(n),doc(n);
        for(int i=0;i<n;i++)   cin >>  poc[i];
        for(int i=0;i<n;i++)   cin >>  doc[i];

        ll strt = n*2*k;
        vector<ll>bir(strt  , -1);
        vector<vector<int>> rev(strt);

        auto strt_rd = [&](ll indx, ll sindx, ll sr){
            return(indx * 2 + sindx) * k + sr;
        };
        for(ll i=0;i <n ;i++){
            for(ll sindx =0; sindx <2 ; sindx++){
                // dirsor
                ll sor = sindx == 0 ?  +1 :  -1;
                for(ll sr =0; sr <k;sr++){
                    //direct s indx
                    ll  dsindx = strt_rd(i  , sindx ,sr);

                    ll scnd =( sr == doc[i]  ? -sor : sor);
                    //ndirsnr
                    ll snr = (scnd == +1 ? 0 : 1);
                    ll j =i + scnd;
                    if(j < 0 || j >=n){
                        bir[dsindx] = -1;
                    }
                    else{
                         ll ist = llabs(poc[j] - poc[i]);
                         ll sr2 = ll((sr+(ist%k))%k);
                          ll ndid = strt_rd(j,snr,sr2)
                    }
                } 
            }
        }


    }
};
int main()
{
    fio
    int t;cin>>t;
    while(t--){
        prblm4 p4soln;
        p4soln.retaliation();
    }

}