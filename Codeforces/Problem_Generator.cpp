//https://codeforces.com/problemset/problem/1980/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;cin >>t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string a;cin >> a;
        int freq[7] = {0};
        for(char c : a){
            if(c >= 'A' && c<='G'){
                freq[c-'A']++;
            }
        }
        long long ans = 0;
        for(int i=0;i<7;i++){
            ans += max(0,m-freq[i]);
        }
        cout << ans << endl;
    }
   return 0;
}