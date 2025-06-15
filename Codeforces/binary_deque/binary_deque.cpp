#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,s;
        cin >> n >> s;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int mot =0;
        for(int i=0;i<n;i++)
        {
            mot += a[i];
        }
        if(mot < s){
            cout <<-1<<endl;
            continue;
        }
        if(mot == s){
            cout <<0 << endl;
            continue;
        }
        int l=0,sum=0,mx_len=0;
        for(int r=0;r<n;r++){
            sum += a[r];
            while(sum > s){
                sum -= a[l];
                l++;
            }
            if(sum == s){
                mx_len = max(mx_len,r-l+1);
            }
        }
        cout <<(n-mx_len)<<endl;
    }
   return 0;
}