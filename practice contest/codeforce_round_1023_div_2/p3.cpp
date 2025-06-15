#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector <long long> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        long long c =0, m_x = LLONG_MIN;
        for(int i=0; i<n ; i++){
            if(s[i] == '1'){
                c = max(c + v[i], v[i]);
                m_x = max(m_x,c);
                if(c <0)c =0;
            }else{
                c=0;
            }
        }
        if(m_x > k){
            cout << "No\n";
            continue;
        }
        int z_p =-1;
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                z_p = i;
                break;
            }
        }
        if(z_p == -1){
            if(m_x == k){
                cout <<"Yes\n";
                for(long long b:v) cout <<b<<' ';
                cout <<endl;
            }else{
                cout <<"No\n";
            }
            continue;
        }
        int j = z_p;
        long long s_sum =0, lmx = LLONG_MIN;
        bool foundL = false;
        for(int i=j-1;i>=0 && s[i] == '1'; i--){
            s_sum += v[i];
            lmx = max(lmx,s_sum);
            foundL = true;
        } 
        long long L = foundL ? lmx : 0;
        long long p_sum =0, rmx =LLONG_MIN;
        bool foundR = false;
        for(int i=0j+1;i<n && s[i] == "1";i++){
            p_sum += v[i];
            rmx = max(rmx,p_sum);
            foundR = true;
        }
        long long R = foundR ? rmx : 0;
        long long x;
        if(L >=0 && R >=0){
             x = k- L -R;
        }else if(L >=0 && R <=0){
            x = k - L;
        }else if(L <=0 && R >= 0){
            x = k-R;
        }else{
            x = k;

        }
        cout <<"Yes\n";
        for(int i=0; i<n;i++){
            if(s[i] == '0'){
                if(i==j) cout <<x;
                else cout <<-1000000000000000000LL;
            }else{
                cout<<v[i];
            }
            cout <<(i+1 < n ? ' ':'\n');
        }
    }
    
   return 0;
}