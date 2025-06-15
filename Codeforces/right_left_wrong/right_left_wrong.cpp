#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;
    cin >>n;
    vector<long long>a(n+1,0);
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        a[i]=  a[i-1] +x;
    }
    string s;
    cin >> s;
    long long ans=0,l=0,r = n-1;
    while(r>l){
        while(l<n && s[l] == 'R'){
            l++;
        }
        while(r >=0 && s[r] == 'L'){
            r--;
        }
        if(l < r){
            ans += a[r+1] - a[l];
            l+=1;
            r-=1;
        }
    }
    cout << ans <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solution();
    }
   return 0;
}