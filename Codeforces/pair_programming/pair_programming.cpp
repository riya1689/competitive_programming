#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int k,n,m;
        cin >> k >> n >> m;
        vector <int> a(n),b(m);
        for(int i=0;i<n;i++){
            cin >>a[i];
        }
        for(int i=0;i<m;i++){
            cin >>b[i];
        }
        int p1=0,p2=0;
        vector<int>r;
        bool fine = true;
        while(p1<n || p2<m){
            bool go = false;
            if(p1 < n && a[p1]==0){
                r.push_back(0);
                k++;
                p1++;
                go = true;
            }
            else if(p2 < m && b[p2]==0){
                r.push_back(0);
                k++;
                p2++;
                go = true;
            }
            else if(p1 < n && a[p1] <=k){
                r.push_back(a[p1++]);
                go = true;
            }
            else if(p2 <m && b[p2] <=k){
                r.push_back(b[p2++]);
                go = true;
            }
            if(!go){
                cout <<-1<<endl;
                fine = false;
                break;
            }
        }
        if(fine){
            for(int x: r){
                cout << x <<' ';
            }
            cout <<endl;
        }
    }
   return 0;
}