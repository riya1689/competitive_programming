//https://www.codechef.com/problems/NUTRICOST
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--){
        int n,c;
        cin >> n >> c;
        vector<int> a(n), b(n);
        for(int i=0;i<n;++i){
            cin >> a[i];
        }
        for(int i=0;i<n;++i){
            cin >> b[i];
        }
        unordered_map<int,int>mincst;
        for(int i=0;i<n;++i){
            if(mincst.find(a[i]) == mincst.end() || b[i] < mincst[a[i]])
                mincst[a[i]] = b[i];
        }
        vector<int>cst;
        for(auto &[vitamin,cost] : mincst){
            cst.push_back(cost);
        }
        sort(cst.begin(),cst.end());
        int y =0, maxVal =0;
        for(int i=0;i<cst.size();++i){
            y+=cst[i];
            int val = c*(i+1)-y;
            if(val > maxVal) maxVal = val;
        }
        cout << maxVal << endl;

    }
   return 0;
}