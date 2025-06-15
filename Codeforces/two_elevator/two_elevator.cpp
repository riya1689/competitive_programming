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
        int a , b,c;
        cin >> a >> b >> c;
        int f1,f2;
        f2= abs(b-c)+(c-1);
        f1 = abs(a-1);
        if(f1==f2){
            cout << 3 << endl;
        }
        else if(f1<f2){
            cout<<1<<endl;
        }
        else{
            cout <<2<<endl;
        }

    }
   return 0;
}