#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n,a[200005];
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    long long i=0,j=n+1,xi=0,xj=0,dx =0;
    while(i<j){
        if(xi < xj){
            xi += a[++i];
        }
        else if(xi > xj)
        {
            xj += a[--j];
        }
        else{
            dx =i;
            xi += a[++i];
            xj +=a[--j];
        }
    }
    cout << accumulate(a+1,a+dx+1,0LL);
   return 0;
}