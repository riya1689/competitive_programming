#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-- ){
        int n,k;
        cin >> n >> k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int minimum_waste = INT_MAX;
        bool psbl = false;
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                psbl = true;
                int w = a[i] % k;
                if(w < minimum_waste){
                    minimum_waste = w;
                }
            }
        }
        if(psbl){
            cout << minimum_waste<< endl;
        }
        else{
            cout << -1 << endl;
        }
    }
   return 0;
}