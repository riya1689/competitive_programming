#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll =long long;
//ll dp[10][2][2];

class prblm2{
public:
    void nearestSquare(){

        int n, f, s;  cin >> n;
        // calcu

        s =  (int ) sqrt(n);  f = s*s;
        
        cout << f <<  endl;

        
    }
};
int main()
{
    fio
    int t;cin>>t;
    while(t--){

        prblm2 p2soln;
       p2soln.nearestSquare();
    }
   
   return 0;
}