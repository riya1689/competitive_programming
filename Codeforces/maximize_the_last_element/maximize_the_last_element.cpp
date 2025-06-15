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
        int n,mx=0;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i<n;i++)
        {
            cin >> v[i];
        }
        for(int i=0; i<n;i+=2)
        {
            if(mx<v[i])
            {
                mx =v[i];
            }
        }
        cout << mx <<endl;

    }
   return 0;
}