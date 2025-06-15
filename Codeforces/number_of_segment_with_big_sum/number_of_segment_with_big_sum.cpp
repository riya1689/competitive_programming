#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    long long n,s;
    cin >> n>>s;
    vector<long long>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    long long l=0,sum=0,segment=0;
    for(long long r=0;r<n;r++)
    {
        sum+=a[r];
        while(sum >=s){
            segment += (n-r);
            sum -=a[l];
            l++;
        }
    }
    cout <<segment <<endl;
   return 0;
}