#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
class prblm1{
public:
    void mxsulm(){
        int  x;if(!(cin  >>  x)) return ;

        int p =25 - x;

        //p       nd
        if(p <= 0)  cout << 0 <<endl;

        else{
            int sal = ( p + 3)/4; cout <<  sal  << endl;
        }

        
    }
};
int main()
{
    fio
        prblm1 p1soln;
        p1soln.mxsulm();

   
   return 0;
}