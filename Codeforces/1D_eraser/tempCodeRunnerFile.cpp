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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cur_b=0;
        for(int i=1;i<=k;i++)
        {
            if(s[i]=='B')
            {
                cur_b++;
            }
            
        }
        int min_b= cur_b;
        for(int i=k; i<n;i++)
        {
            if(s[i-k + 1] == 'B')
            {
                cur_b--;
            }
            if(s[i] == 'W'){
                cur_b++;
            }
            min_b = min(min_b,cur_b);
        }
        cout << min_b<<endl;
    }
   return 0;
}