#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n,x;
    cin >> n;
    vector<int>ar(n);
    for(int i = 0;i<n;i++){
        cin >> ar[i];
    }
    unordered_set<int>get;
    vector<int>final_ar;
    for(int i=n-1;i>=0;i--){
        if(get.find(ar[i])== get.end())
        {
            get.insert(ar[i]);
            final_ar.push_back(ar[i]);
        }
    }
    reverse(final_ar.begin(),final_ar.end());
    cout << final_ar.size() <<endl;
    for(int x : final_ar)
    {
        cout << x <<" ";
    }
    cout << endl;
   return 0;
}