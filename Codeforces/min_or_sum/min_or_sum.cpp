#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans =0;
        for(int i=0,x;i<n;++i){
            cin >> x;
            ans |= x;
        }
        cout << ans << endl;
    }
   return 0;
}