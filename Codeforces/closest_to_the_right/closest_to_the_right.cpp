#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n,q;cin >>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<q;i++){
        int key,l=0,r=n-1,ans=n,mid;
        cin >> key;
        while(l <= r){
            mid = l+(r-l)/2;
            if(key <=a[mid]){
                ans = mid; r = mid -1;
            }
            else{
                l= mid +1;
            }

        }
        cout << ans+1<<endl;
    }
   return 0;
}