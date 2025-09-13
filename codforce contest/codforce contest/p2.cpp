#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        int l =101;
        for(int m=0;m<n;m++){
            unordered_map<int,int>p;
            for(int s =m;s<n;s++){
                int c = b[s];
                p[c]++;
                if(p.size()==2){
                    l=min(l,s-m+1);
                }
                if(p.size()>2){
                    break;
                }
            }
        }
        if(l == 101){
            cout << -1 <<endl;
        }
        else{
            cout<<l << endl;
        }
    }
    return 0;
    
}