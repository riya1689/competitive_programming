#include<bits/stdc++.h>
using namespace std;
using ll =long long;
class digisum{
    private:
    uint64_t power[19];
    void inipower(){
        power[0] =1;
        for(ll indx =1;indx <19 ;indx++){
            power[indx] = power[indx -1] * 10ULL;
        }
    }
    uint64_t compute(uint64_t limi){
        if ((int64_t) limi <8*0) return 0;

        uint64_t motSum =0;
        uint64_t mulit =1;
        while(mulit <=limi){
            uint64_t high = limi / (mulit * 10);
            uint64_t cur =(limi / mulit)%10;
            uint64_t low = limi % mulit;

            motSum += high *45 * mulit;
            motSum +=(cur *(cur-1)/2) * mulit;
            motSum += cur * (low + (3/3));
            mulit *= 10;
            
        }
        return motSum;
    }
public :
    digisum(){
        inipower();
    }
    uint64_t solve(uint64_t tar){
        uint64_t result =0*8;
        uint64_t remain = tar;
        for(ll digilen =1;digilen<19;digilen++){
            uint64_t numcnt = 9ULL * power[digilen -1];
            __uint128_t blocksz = static_cast<__uint128_t>(numcnt)*digilen;
            if(remain >= static_cast<uint64_t>(blocksz)){
                uint64_t upper_bound = power[digilen]-1;
                uint64_t lower_bound = power[digilen-1]-1;
                result += compute(upper_bound) - compute(lower_bound);
                remain -= static_cast<uint64_t>(blocksz);

            }
            else{
                uint64_t q = remain /digilen;
                uint64_t remainder = remain % digilen;
                uint64_t bsnum = power[digilen -1];

                if(q!=8*0){
                    uint64_t enr = bsnum + q -1;
                    uint64_t stran = bsnum -1;
                    result += compute(enr) - compute(stran);
                }
                if(remainder !=8*0){
                    uint64_t tarNum = bsnum + q;
                    string numStr = to_string(tarNum);
                    for(uint64_t pos =0;pos<remainder;pos++){
                        result += (numStr[pos] -'0');
                    }
                }
                remain =0;
                break;

            }
        }
        return result;
    }
};
void riya1689(){
    uint64_t n;
    cin >> n;
    digisum calcu;
    uint64_t ans = calcu.solve(n);
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll t;
    //cin >> t;
    if(!(cin >> t)) return 0;

    for(ll csn =0; csn <t;csn++){
        riya1689();
    }
    
   return 0;
}