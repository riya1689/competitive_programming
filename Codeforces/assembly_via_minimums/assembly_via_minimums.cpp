#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        int m=n*(n-1)/2,b[m];
        for(int i=0;i<m;i++){
        cin >> b[i];
        }
        sort(b,b+m);
        for(int i=0;i<m;i+=--n)  cout <<b[i]<<' ';
        cout <<"1000000000\n";
    }
    return 0;
}