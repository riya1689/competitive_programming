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
        int a, n,breaks=0;
        cin >> n;
        for(int i=0;i <n ; i++){   
        cin >> a;
        breaks = breaks + (a-1);
        }
        cout << breaks << endl;
    }
   return 0;
}