//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/IMDB
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--){
        int n,x,ans =0;
        cin >> n >> x;
        for(int i=0;i<n;i++){
            int s,r;
            cin >> s >> r;
            if(s<=x){
                ans = max(ans,r);
            }
        }
        cout << ans << endl;
    }
   return 0;
}