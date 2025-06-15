#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
class prblm2{
public:
    void numberReduction(){
        int t; if(!(cin >>t))  return  ;
        while ( t--){

            // p   ex
            int p,q; cin  >> p;

            q = p%6;  if( q == 0 || q == 3)  cout << 3 << endl;
            else cout << 1 << endl;

        }
    }
};
int main()
{
    fio
    
        prblm2 p2soln;
        p2soln.numberReduction();
    
   
   return 0;
}