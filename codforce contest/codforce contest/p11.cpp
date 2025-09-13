#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, p, q;
        cin >> n >> m >> p >> q;
        int a = n%p,b=n/p;
        if(a == 0)
        {
            if(m == b *q){
                cout << "YES"<<endl;
            }
            else{
                cout <<"NO"<<endl;
            }
        }
        else{
            cout <<"YES"<<endl;
        }
    }
    return 0;
}