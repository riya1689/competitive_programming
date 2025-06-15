#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int total =0;
        for(char c :{'A','B','C','D'}){
            int cnt =count(s.begin(),s.end(),c);
            total +=min(n,cnt);
        }
        cout <<total<<endl;
    }
   return 0;
}