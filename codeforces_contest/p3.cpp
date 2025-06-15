#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long

static const int INF =0x3f3f3f3f;
class prblm3{
public:
    void coolPartition(){
        long long n,  k; cin >> n  >>  k;
        vector<unsigned long long> beautiful(n);
        for(int i=0;i< n; ++i)   cin >>  beautiful[i];
        long long nice =0; 

        //  abeautiful  nicebeauty

    
        // vsundor
        for(auto  sundor : beautiful)   nice +=  __builtin_popcountll(sundor);

        //vector
        vector<unsigned long long> khoroch;
        khoroch.reserve(n*60);

        for(auto sundor : beautiful){

            unsigned long long poc, bortoman  =  sundor;

            while(true){
                //paa
                long long a = __builtin_ctzll(~bortoman);

                if(a >= 60) break;

                poc = 1ULL << a;
                if(poc >  ( unsigned long long)  k)  break;

                khoroch.push_back(poc);

                bortoman  +=  poc;
            }
        }


        sort(khoroch.begin(),khoroch.end());
        unsigned long long bybo =0;
        long long attain =0;
        //   ga atttain
        for( auto poc : khoroch){

            if( bybo + poc  > (unsigned long long) k)   break;


            bybo +=  poc ;  ++attain;


        }

        cout <<  nice + attain << endl;

        
    }
};
int main()
{
    fio
    int t;if(!(cin >> t)) return 0;
    while(t--){
        prblm3 p3soln;
        p3soln.coolPartition();
    }
   
   return 0;
}