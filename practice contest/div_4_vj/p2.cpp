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
    int h,x,y;
    cin >>h>>x>>y;
    int n_attack = (h+x-1)/x;
    int remain_h=max(0,h-y);
    int sp_attk = 1+(remain_h + x - 1 ) /x;
    cout << min(n_attack,sp_attk)<<endl;
}   return 0;
}