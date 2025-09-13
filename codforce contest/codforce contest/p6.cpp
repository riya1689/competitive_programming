#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;cin >> t;
    vector<long long> n(t);
    long long mx =0;
    for(int i=0;i<t;i++){
        cin >> n[i];
        if(n[i] >mx){
            mx = n[i];
        }
    }
    vector<bool> pornot(mx +1,true);
    if(mx >= 0)
    {
        pornot[0] = false;

    }
    if(mx >=1) pornot[1]=false;
    for(int i=2 ; i*i <= mx;i++){
        if(pornot[i]){
            for(int j=i*i;j<=mx;j+=i){
                pornot[j]=false;
            }
        }
    }
    for(int idx =0;idx <t;idx++){
        int nn = n[idx];
        if(nn == 2){
            cout <<"1 2"<<endl;
            continue;
        }
    }
    
}