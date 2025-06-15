#include<bits/stdc++.h>
using namespace std;
void result(){
    int n;
    cin >> n;
    vector<int>v(n),j,b;
    for(int i=0 ;i<n ; i++){
        cin >> v[i];
        if(i%2 == 0){
            j.push_back(v[i]);
        }
        else{
            b.push_back(v[i]);
        }
    }
    sort(j.begin(),j.end());
    sort(b.begin(),b.end());
    int j_ix =0,b_ix=0;
    for(int i=0;i<n;i++){
        if(i%2 ==0)
        {
            cout << j[j_ix++]<<" ";
        }
        else{
            cout <<b[b_ix++]<<" ";
        }
    }
    cout <<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        result();
    }
    
   return 0;
}