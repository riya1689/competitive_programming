#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        string s,v;
        cin >> s;
        cin >> v;
        if(s[0] != v[0]){
            cout << -1 << endl;
        }
        else{
            vector<int>ans;
            for(int i=1;i<n;i++){
                if(s[i]=='0' && s[i-1] == '1'){
                    s[i] = '1';
                    ans.push_back(i);
                }
            }
            bool possible = true;
            for(int i=n-1;i>0;i--){
                if(s[i] != v[i]){
                    if(s[i-1] == '1'){
                        s[i] = v[i];
                        ans.push_back(i);
                    }
                    else{
                        possible = false;
                    }
                }
            }
            if(!possible){
                cout <<-1 <<endl;
            }
            else{
                cout <<ans.size()<<endl;
                for(int i=0;i<ans.size();i++){
                    cout << ans[i]<<" ";
                }
                cout << endl;
            }
        }
    }
   return 0;
}