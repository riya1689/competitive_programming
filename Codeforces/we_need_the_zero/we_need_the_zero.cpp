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
    vector<int>a(n);
    int xor_val = 0;
    for(int i=0;i<n;++i){
        cin >> a[i];
        xor_val ^= a[i];
    }
    if(xor_val ==0){
        cout << 0 <<endl;
    }
    else{
        if(n%2 == 1){
            cout << xor_val << endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    }
   return 0;
}