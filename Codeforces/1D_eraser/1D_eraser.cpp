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
        int bTOw=0;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='B')
            {
                bTOw++;
                i+=k-1;
            }
            
        }
        cout << bTOw <<endl;
    }
   return 0;
}