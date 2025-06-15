//https://codeforces.com/problemset/problem/1421/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--){
        long long a,b;
        cin >> a>>b;
        cout<<(a^b)<<endl;
    }
   return 0;
}