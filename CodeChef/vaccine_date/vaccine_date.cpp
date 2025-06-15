#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int d,l,r;cin >> d>> l >> r;
        if(d>=l && d<=r){
            cout <<"Take second dose now"<<endl;
        }
        else if(d<l){
            cout <<"Too Early"<<endl;
        }
        else{
            cout <<"Too Late"<<endl;
        }

    }
   return 0;
}