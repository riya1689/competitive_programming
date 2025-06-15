#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(k < n - 1){
            cout << -1 <<endl;
            continue;
        }
        vector<int>a(n);
        for(int i=0; i < n-2 ;i++)
        {
            a[i] = i+1;
        }
        int cm = n-1;
        if(cm == k){
            for(int num : a){
                cout << num <<" ";
            }
            cout << endl;
            continue;;
        }
        int p = k - cm;
        a[n-1] = (2 + p) * 2;
        if (a[n-1] > 1e9){
            cout << -1 << endl;
            continue;
        }
        cm += p;
        if(cm != k){
            cout << -1 << endl;
            continue;
        }
        for(int num : a){
            cout << num << " ";
        }
        cout << endl; 
    }

   return 0;
}