#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n,m;
    cin >> n >>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int j=0;j<m;j++)
    {
        cin >> b[j];
    }
    vector<int>n_m;
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i] <= b[j]){
            n_m.push_back(a[i++]);
        }else{
            n_m.push_back(b[j++]);
        }
    }
    while(i<n){
        n_m.push_back(a[i++]);
    }
    while(j<m){
        n_m.push_back(b[j++]);
    }
    for(int x: n_m){
        cout<<x <<" ";
    }
    cout<<endl;
   return 0;
}