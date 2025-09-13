#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
void ans(){
    int khabar,vtmn_vl;
    cin >> khabar >> vtmn_vl;
    vector<int>vtmn_ty(khabar);
    for(int i=0;i<khabar;i++){
        cin >> vtmn_ty[i];
    }
    vector<int>itm_cst(khabar);
    for(int i=0;i<khabar;i++){
        cin >> itm_cst[i];
    }
    vector<int>sosta(105,INF);
    for(int i=0;i<khabar;i++){
        int vtmn = vtmn_ty[i];
        int cst = itm_cst[i];
        if(cst <sosta[vtmn]){
            sosta[vtmn] = cst;
        }
    }
    long long mx_pr =0;
    for(int vtmtyp =1;vtmtyp <=100;vtmtyp++){
        if(sosta[vtmtyp]!=INF){
            int tg = vtmn_vl - sosta[vtmtyp];
            if(tg >0){
                mx_pr += tg;
            }
        }
    }
    cout << mx_pr << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;cin >> t;
    while(t--){
        ans();
    }
    
}