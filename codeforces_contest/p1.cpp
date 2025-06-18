#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll =long long;

class prblm1{
public:
    void divideInto3(){
        int  n , ab , reminder ,mini,mxi, nt_b;cin >> n;
        ab = n/3;  reminder = n%3; 
        mini = ab;  mxi = ab + (reminder > 0 ?  1  :  0);
        cout << mxi  - mini  << endl;

    }
};
int main()
{
    fio
   
    
        prblm1 p1soln;
        p1soln.divideInto3();
    
   
   return 0;
}