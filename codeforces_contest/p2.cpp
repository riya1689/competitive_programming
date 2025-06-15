#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
class prblm2{
public:
    void makeItPermu(){
       int n;cin >> n;

       vector<tuple<int,int,int>>  oprations;

       oprations.emplace_back(1,  1,  n);


       for(int  i=2  ;i<=n ;++i){

        int ager_len,shur;
        ager_len = n - i +  1;
        shur  = ager_len + 1;

        oprations.emplace_back(i,1,  ager_len);

        if(shur <= n){
            oprations.emplace_back(i,shur ,  n);
        }
       }
       cout <<  oprations.size() << endl;

       for(  auto &[sari,  l , r] : oprations){
        cout   <<  sari <<  " "  << l <<  " "  << r  << endl;
       }



    }
};
int main()
{
    fio
    int t;cin>>t;
    while(t--){
        prblm2 p2soln;
        p2soln.makeItPermu();
    }
   
   return 0;
}