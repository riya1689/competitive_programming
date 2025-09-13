#include<bits/stdc++.h>
using namespace std;
bool CoutYes(vector<int>&a){
    int ref = abs(a.front());
    int cnt =0;
    for(size_t i=1; i<a.size();++i){
        if(abs(a[i])<ref){
            cnt++;
        }
    }
    return cnt <=a.size() / 2;
}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>num(n);
        for(int& s : num)
        {
            cin >> s;
        }
        if(CoutYes(num)){
            cout <<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
    
   return 0;
}