#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int tc;
    cin >> tc;
    string str ="abcdefghijklmnopqrstuvwxyz";
    while(tc--)
    {
        int n;
        cin >> n;
        map<char,int>mp;
        for(int i=0;i<str.size();i++){
            mp[str[i]] =0;
        }
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            for(auto it: mp){
            if(it.second == v[i]){
                cout <<it.first;
                mp[it.first]++;
                break;
            }
        }
        }
        cout<<endl; 
    }
   return 0;
}