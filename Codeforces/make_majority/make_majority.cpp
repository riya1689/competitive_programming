#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        bool fine = false;
        for(int i=0;i<=n-3;i++){
            if(a[i] == '1' && a[i+1] == '1' && a[i+2] == '1'){
                fine = true;
                break;
            }
        }
        int cnt11=0;
        for(long long i=0;i<n-1;i++){
            if(a[i] == '1'&& a[i+1] == '1'){
                cnt11++;
            }
        }
        if(cnt11 >= 2)
        {
            fine = true;
        }
        if(cnt11 >=1 && (a[0] == '1' || a[n-1] == '1'))
        {
            fine = true;
        }
        if(a[0] == '1' && a[n-1]=='1'){
                fine = true;
        }
        cout<<(fine ? "YES": "NO")<< endl;


    }
   return 0;
}