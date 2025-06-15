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
        cin >> n;
        vector<int>d(n);
        for(int i=0;i<n;i++)
        {
            cin >> d[i];
        }
        int lal =0, nil =0,zero=0;
        for(int color:d ){
            if(color == 1) lal++;
            else if(color==2) nil++;
            else zero++;
        }
        int p = nil - lal;
        int mot = zero + p;
        if(mot%2 != 0)
        {
            cout <<"No"<<endl;
            continue;

        }
        int a = mot / 2;
        if(a >=0 && a <= zero)
        {
            cout <<"Yes"<<endl;

        }
        else cout <<"No"<<endl;
    }
   return 0;
}