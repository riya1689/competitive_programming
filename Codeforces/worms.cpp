//https://codeforces.com/problemset/problem/474/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n;cin >> n;
    vector<long long>s(n+1,0);
    for(int i=1;i<=n;i++){
        long long a;
        cin >> a;
        s[i] = s[i-1] + a;
    }
    int m;cin >>m;
    while(m--){
        long long q;cin >>q;
        int i= int(lower_bound(s.begin()+1,s.end(),q) - s.begin());
        cout << i << endl;
    }
   return 0;
}