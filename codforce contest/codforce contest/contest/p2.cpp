#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >>t;
    while(t--)
    {
        long long n,x;
        cin >>n>>x;
        if(n==1){
            if(x==0)
            {
                cout <<-1 <<endl;
            }
            else{
                cout << x << endl;
            }
        }
        else if(n==2){
            if(x==0){
                cout << 2 << endl;
            }
            else{
                cout <<x + 2 <<endl;
            }
        }
        else{
            cout <<x+ n-1 <<endl;
        }
    }
   return 0;
}