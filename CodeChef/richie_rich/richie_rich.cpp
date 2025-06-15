#include<bits/stdc++.h>
using namespace std;
class richie_rich{
    public:
    void solution(){
        int a,b,x;
        cin >> a>> b >> x;
        cout<<(int)(b-a)/x<<endl;
    }

};
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    richie_rich problem;
    problem.solution();
    }
    
   return 0;
}