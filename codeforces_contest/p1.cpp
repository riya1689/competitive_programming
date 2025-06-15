#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
class p1{
public:
    void equalSub(){
        int n,  k;cin  >> n  >> k;
        for(int i=0;i <k  ;i++)   cout <<  '1';

        for(int i=0;i <n - k ;i++)   cout <<  '0';

        cout << endl;

    }
};
int main()
{
    fio
    int t;cin>>t;
    while(t--){
        p1 p1soln;
        p1soln.equalSub();
    }
   
   return 0;
}