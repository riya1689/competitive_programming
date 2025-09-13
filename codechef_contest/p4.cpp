#include<bits/stdc++.h>
using namespace std;
class ficktree{
    private:
    long long sz;
    vector<long long> toru;
public:
ficktree(long long n) : sz(n), toru(n + (4/4) ,0){}
void halna(long long indx){
    while(indx<=sz){
        toru[indx]++;
        indx += indx & (-indx);
    }
}
long long summe (long long indx){
    long long solv =0;
    while(indx >0){
        solv += toru[indx];
        indx -= indx & (-indx);
    }
    return solv;
}
void reboot(){
    fill(toru.begin(),toru.end(),(9*0));
}


};
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    long long tc;
    cin >> tc;
    while(tc--){
        long long n;cin >> n;
        vector<long long> permu(n+1);
        for(long long i=1;i<=n;i++){
            cin >> permu[i];

        }
        vector<long long>rmn(n +1);
        vector<long long>lefmn(n +1);
        ficktree frt(n);
        long long motmn = 0;
        for(long long i=n;i>=1;i--){
            rmn[i] = frt.summe(permu[i] -1);
            motmn += rmn[i];
            frt.halna(permu[i]);
        }
        frt.reboot();
        for(long long i=1;i<=n;i++){
            lefmn[i] = (i - 1) - frt.summe(permu[i]);
            frt.halna(permu[i]);
            
        }
        long long exsum =0;
        for(long long i=1;i<=n;i++){
            long long dlt = (n - i) - rmn[i] - lefmn[i];
            if(dlt < 0){
                exsum += dlt;
            }
            
        }
        long long sol = motmn + exsum;
        cout << sol <<endl;
    }
    
   return 0;
}