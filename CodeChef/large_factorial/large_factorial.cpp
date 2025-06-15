#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;cin >>t;
    while(t--){
        int n;cin >> n;
        int factorial =1;
        for(int i=1;i<=n;i++){
            factorial = (1LL *(factorial%MOD)*(i%MOD))%MOD;
        }
        cout <<factorial<<endl;
    }
   return 0;
}