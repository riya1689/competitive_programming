//https://codeforces.com/problemset/problem/1979/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;cin >> t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int &i : a){
            cin >> i;
        }
        int mini = max(a[0],a[1]);
        for(int i=1;i<n-1;i++){
            mini = min(mini,max(a[i],a[i+1]));
        }
        cout << mini -1 << endl;
    }
}