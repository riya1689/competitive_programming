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
    int n,m,l,r;
    cin >> n>>m>>l>>r;
    int h =max(l,-m+1);
    int ans = h +m-1;
    if(ans >r ){
        ans = r;
        h = ans - m + 1;
    }
    cout << h <<" " <<ans << endl;
    }

    return 0 ;

}