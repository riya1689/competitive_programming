//https://codeforces.com/problemset/problem/2121/A
//Codeforces Round 1032 (Div. 3)
#include<bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(false);cin.tie(nullptr);
using ll =long long;
 
class prblm1{
public:
    void letterHome(){
        int  n,  s; cin >> n >> s;
        vector<int> l(n);
        for(int i=0;i<n;i++)  cin >> l[i];
 
        int li = l[0], lh = l[n-1];
 
        int letterhm = (lh - li) +  min (abs(s - li)   ,  abs(s -  lh)); cout << letterhm << endl;
       
    }
};
int main()
{
    fio
    int t;cin>>t;
    while(t--){
        prblm1 p1soln;
        p1soln.letterHome();
    }
   
   return 0;
}