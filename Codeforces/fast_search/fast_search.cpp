#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n;cin >> n;
    vector<long long> a(n);
    for(long long i=0; i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int q;cin >>q;
    while(q--){
        long long l,r;cin >> l >> r;
        auto left = lower_bound(a.begin(),a.end(),l);
        auto right = upper_bound(a.begin(),a.end(),r);
        cout << right - left<<" ";

    }
   return 0;
}