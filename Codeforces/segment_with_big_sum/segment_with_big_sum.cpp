#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    long long n,s;
    cin >> n >>s;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    long long mn_size = LONG_LONG_MAX;
    long long l=0,sum =0;
    int r=0;
    while(r<n){
        sum += a[r];
        while(sum >=s){
            mn_size = min(mn_size,r-l+1);
            sum -= a[l];
            l++;
        }
        r++;
    }
    if(mn_size == LONG_LONG_MAX)cout<<-1<<endl;
    else cout << mn_size << endl;
   return 0;
}