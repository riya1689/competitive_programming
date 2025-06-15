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
        cin >> n>>k;
        string s;
        cin >> s;
        int cur_white =0;
        for(int i=0;i<k;i++)
        {
            if(s[i] == 'W')
            {
                cur_white++;
            }
        }
        int min_white = cur_white;
        for(int i=k;i<n;i++)
        {
            if(s[i-k] == 'W')
            {
                cur_white--;
            }
            if(s[i] == 'W'){
                cur_white++;
            }
            min_white = min(min_white,cur_white);

        }
        cout <<min_white<<endl;
    }
   return 0;
}