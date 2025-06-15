#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin >> n >> x;
    vector <int> prm(n+1,0);
    vector<bool>bybk(n+1,false);
    for(int i=1;i<=n;i++){
        int rq =x & ~(i & ~x);
        if(rq >= 1 && rq <= n && !bybk[rq]){
            prm[i] = rq;
            bybk[rq] = true;
        }
    }
    vector<int>baki;
    for(int i=1;i<=n;i++){
        if(!bybk[i]){
            baki.push_back(i);
        }
    }
    int rm_idx =0;
    for(int i=1;i<=n;i++){
        if(prm[i]==0){
            prm[i] = baki[rm_idx++];
        }
    }
    for(int i=1;i<=n;i++){
        cout << prm[i] <<" "; 
    }
    cout << endl;

}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
   return 0;
}