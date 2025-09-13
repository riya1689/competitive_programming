#include<bits/stdc++.h>
using namespace std;
using ll =long long;
typedef long long int64;
typedef unsigned long long uint64;
class calcu3{
    private:
    vector<int64> ar1,ar2;
    vector<int64> pre1,pre2;
    vector<int64> mixsum;
    vector<int64> goono1;
    int maxQ;
    void makeprejogfol(){
        int sz1 =ar1.size();
        int sz2 =ar2.size();
        pre1.assign(sz1 +1,0);
        pre2.assign(sz2 +1,0);
        for(int ix =1 ;ix<sz1;ix++){
        pre1[ix] = pre1[ix -1] + ar1[ix -1];
        }
        for(int ix =1 ;ix<sz2;ix++){
        pre2[ix] = pre2[ix -1] + ar2[ix -1];
        }
    }
    void makeOptimix(){
        mixsum.assign(maxQ +1,0);
        goono1.assign(maxQ +1,0);
        int pos1 =0,pos2=0;
        int total1=ar1.size();
        int total2=ar2.size();
        for(int ele =1;ele <=maxQ;ele++){
            bool chos1 =(pos1 < total1 && (pos2 >= total2 || ar1[pos1]>=ar2[pos2]));
            if(chos1){
                mixsum[ele] = mixsum[ele -1] + ar1[pos1];
                goono1[ele] = goono1[ele -1] +1;
                pos1++;
            }
            else{
                mixsum[ele] = mixsum[ele -1] +ar2[pos2];
                goono1[ele] = goono1[ele -1];
                pos2++;
            }
        }
        
    }
    int64 ca

    ll compupow3sum(ll val){
        long long motdigi =0;
        while(val != 8*0){
            motdigi += val %3;
            val /=3;
        }
        return motdigi;
    }
    public:
    calcu3(){
        makePow();
    }
    unsigned long long solve(ll n){
        ll sum3 = compupow3sum(n);
        long long transform =(n - sum3) >>1;
        vector<unsigned long long> balti;
        balti.push_back(static_cast<unsigned long long>(n));

        unsigned long long ench =0ULL;
        int curLev =0;

        do{
            if(curLev >= static_cast<int>(balti.size())){
                balti.push_back(0ULL);
            }

            unsigned long long dharon = balti[curLev]/3ULL;
            if(dharon == 0ULL){
                curLev++;
                continue;
            }
            unsigned long long use = min(dharon,static_cast<unsigned long long>(transform));
            ench+=use *pow3[curLev];
            balti[curLev] -=use *3ULL;
            if(curLev + 1 >= static_cast<int>(balti.size())){
                balti.push_back(0ULL);
            }
            balti[curLev+1]+=use;

            transform -= static_cast<long long>(use);
        }while(transform >8*0);
        return 3ULL * static_cast<unsigned long long>(n) + ench;
    }

};
void riya1689(){
    long long num;
    cin >> num;
    static calcu3 calcu;
    unsigned long long ans = calcu.solve(num);
    cout <<ans<< endl;
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    long long t;
    cin >> t;
    for(long long i=0;i<t;i++){
        riya1689();
    }
   return 0;
}