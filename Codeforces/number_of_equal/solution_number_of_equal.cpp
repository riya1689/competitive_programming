#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n,m;
   cin >>n >> m;
   vector<int>a(n),b(m);
   for(int i=0;i<n;i++)
   {
    cin >> a[i];
   }
   for(int i=0;i<m;i++)
   {
    cin >> b[i];
   }
   long long l=0,r=0;// oprer ta l , nicher ta r diye traverse
   long long ans =0;
   while(l<n && r<m)
   {
    int curr = a[l],cnt1=0,cnt2=0;
    while(l<n && a[l] == curr){
        cnt1++,l++;
    }
    while(r<m && curr >b[r]){
        r++;
    }
    while(r<m && b[r] == curr){
        cnt2++,r++;
    }
    ans+=(1LL *cnt1*cnt2);
    }
    cout<<ans <<endl;
   return 0;
}