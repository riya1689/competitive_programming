#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
class prblm6{
public:
    long long shrink(const vector<long long>&az){
    
        // nsz
        long long sz = az.size();

        bool sazano = true;

        for(long long i=1 ;i <sz;++i){
            if(az[i] < az[i-1])  sazano = false ; break;
        }

        if(sazano) return 0;
        for(int bsz=0;bsz <31; ++bsz){
            long long presentm ((1LL<<(bsz+1))-1);
            long long past = az[0] | presentm;

            bool ok = true;
            for(int i=1;i<sz;++i){
                long long bortoman = az[i] | presentm;

                if(bortoman < past){

                    ok = false;  break;

                }
                past  =  bortoman;
            }

            if(ok)  return (1LL << bsz);
        }

        return -1;
    }
};
int main()
{
    fio
    int t;cin>>t;
    while(t--){
        int sz;cin >>sz;


        vector<long long> az(sz);
        for(int i =0; i  < sz;++i){

            cin >> az[i];
        }
        prblm6 p6soln;
        cout << p6soln.shrink(az) << endl;
    }
   
   return 0;
}