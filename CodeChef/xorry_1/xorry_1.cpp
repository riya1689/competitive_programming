#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x;
    cin >> x;
    long long e=x,count =0;
    while(e>1){
        e=e/2;
        count++;
    }
    long long temp = pow(2,count);
    cout << x - temp <<" "<<temp <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    
   return 0;
}