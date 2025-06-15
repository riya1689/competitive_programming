#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
class prblm3{
public:
    void mnmxreduction(){
        int t; if(!(cin >>t))  return  ;
        while(t--){
        int m,n;
        // mq 
        cin >> n >> m;
        vector <long long> a (n+2);
        for(int i=1;i<=n;++i)  cin >>  a[i];

        long long somadhn =0;
        for(int i=1;i<n;++i)   somadhn +=  min (a[i]  , a[i+1]);

        while(m--){

            //exr
            long long r;
            long long indxn;
             cin >> indxn  >> r;

             if(indxn >1 ) somadhn -=  min(a[indxn-1] , a[indxn]);

             if(indxn < n)  somadhn -=  min(a[indxn] , a[indxn+1]);
            
             a[indxn] = r;

             if(indxn >1 ) somadhn +=  min(a[indxn-1] , a[indxn]);
            
             if(indxn < n)  somadhn +=  min(a[indxn] , a[indxn+1]);
             

            cout << somadhn << endl;

        }
    }
}
};
int main()
{
    fio
    
        prblm3 p3soln;
        p3soln.mnmxreduction();
    
   
   return 0;
}