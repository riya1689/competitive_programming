#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int mn =(y+1)/2;
        x -= (mn * 15 -y *4);
        x = max(x,0);
        mn+=(x+14)/15;
        cout <<mn <<endl;
    }
   return 0;
}