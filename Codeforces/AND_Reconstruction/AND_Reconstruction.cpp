#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1e5 +5;
void solve(){
    int n,b[MAX_N],a[MAX_N];
    cin >> n;
    for(int i=1;i<n;i++){
        cin >> b[i];
    }
    b[0] = b[n] =0;
    for(int i=1;i<=n;i++){
        a[i] = b[i-1] | b[i];
    }
    bool valid = true;
    for(int i=1;i<n;i++){
        if((a[i] & a[i+1])!=b[i]){
            valid = false;
            break;
        }
    }
    if(valid){
        for(int i=1;i<=n;i++){
            cout <<a[i]<<' ';
        }
        cout <<endl;
    }
    else{
        cout << -1 <<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    while (t--)
    {
        solve();
    }
    
   return 0;
}