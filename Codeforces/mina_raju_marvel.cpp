#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n,q;
    int caseNum =1;
    while((cin >> n >>q) &&(n||q)){
        vector<int>marble(n);
        for(int i=0;i<n;++i){
            cin >>marble[i];
        }
        sort(marble.begin(),marble.end());
        cout <<"CASE# "<<caseNum++ <<":\n";

        while(q--){
            int x;cin>>x;
            auto it = lower_bound(marble.begin(),marble.end(),x);
            if(it != marble.end() && *it == x){
                cout << x << " found at " <<(it - marble.begin() +1) <<endl;
            }else{
                cout<<x<<" not found\n";
            }
        }
    }
   return 0;
}