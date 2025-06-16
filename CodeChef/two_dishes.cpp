//https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/TWODISH
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n,a,b,c;
        cin >> n>> a>>b >>c;
        if((a+c) >=n && b>=n){
            cout << "YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
   return 0;
}