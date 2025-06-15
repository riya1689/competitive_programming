#include<bits/stdc++.h>
using namespace std;
void s()
{
    int n,k;
    cin >>n >>k;
    vector<long long> a(n);
    long long mn = LLONG_MAX,mx =LLONG_MIN,sum =0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
        mn = min(mn,a[i]);
        mx = max(mx,a[i]);
    }
    long long cnt =0;
    for(long long i=0;i<n;i++){
        if(a[i] == mx) cnt++;
    }
    if(mx - mn > k+1 || (mx -mn == k+1 && cnt >1)) cout <<"Jerry\n";
    else cout << (sum % 2 ? "Tom\n" : "Jerry\n");
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        s();
    }
   return 0;
}