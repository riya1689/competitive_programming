#include<bits/stdc++.h>
using namespace std;
void solution(){
    long long  n,k;
    cin >> n >> k;
    vector<long long>a(n),h(n);
    for(long long i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(long long i=0;i<n;i++)
    {
        cin >> h[i];
    }
    long long ans=0,sum=0,l=0;
    for(long long r=0;r<n;r++){
        if(r>0 && h[r-1]%h[r] != 0){
            sum =0;
            l= r;
        }
        sum+= a[r];
        while(sum > k && l <=r){
            sum -=a[l];
            l++;
        }
        ans = max(ans ,r-l+1);
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
   return 0;
}