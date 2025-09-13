#include<bits/stdc++.h>
using namespace std;
using ll =long long;

int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n;
        string a; cin >> a;
        cin >> m;
        string b,c;
        cin >> b>> c;
        deque<char> result(a.begin(),a.end());
        for(ll i=0;i<m;++i){
            if(c[i] =='V'){
                result.push_front(b[i]);
            }
            else{
                result.push_back(b[i]);
            }
        }
        string final_result(result.begin(),result.end());
        cout << final_result<<endl;


    }
    
   return 0;
}