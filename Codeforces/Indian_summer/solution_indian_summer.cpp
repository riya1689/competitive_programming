#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n;
    cin >> n;
    map<pair<string,string>,bool> mp;
    for(int i=1;i<=n;i++){
        string a,b;
        cin >> a >> b;
        mp[{a,b}] = true;
    }
    cout << mp.size() << endl;
   return 0;
}