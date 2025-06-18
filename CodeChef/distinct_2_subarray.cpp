//https://www.codechef.com/problems/DIS2SUB
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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        unordered_set<int>set;
        for(int i=0;i<n;i++){
            set.insert(arr[i]);
        }
        if(set.size()>=2){
            cout <<2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
   return 0;
}