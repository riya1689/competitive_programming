#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
class prblm2{
public:
    void shrink(){
        int n;cin >> n;
        for(int i=2;i<=n;i++){
            cout<<i<<' ';
        }
        cout <<1<<endl;
    }
};
int main()
{
    fio
    int t;cin>>t;
    while(t--){
        prblm2 p2soln;
        p2soln.shrink();
    }
   
   return 0;
}